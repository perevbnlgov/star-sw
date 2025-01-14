#ifndef STFTTHITCALIBMAKER_HELPER_H
#define STFTTHITCALIBMAKER_HELPER_H

#include <map>
#include <vector>

#define MIN_BCID_SAMPLES 200

class HitCalibHelper {
public:
    HitCalibHelper(){

    }

    bool ready( UShort_t uuid ){
        return ( dbcidHist.count( uuid ) > 0 && dbcidHist[uuid].size() > MIN_BCID_SAMPLES );
    }

    void fill( UShort_t uuid, Short_t dbcid ){
        dbcidHist[ uuid ][ dbcid ]++;
        if (  dbcidHist[ uuid ].size() > MIN_BCID_SAMPLES ){
            auto x = std::max_element(dbcidHist[ uuid ].begin(), dbcidHist[ uuid ].end(),
                [](const pair<Short_t, Int_t>& p1, const pair<Short_t, Int_t>& p2) {
                    return p1.second < p2.second; });
            dbcidAnchor[ uuid ] = x->first;
        }
    }

    Short_t time( UShort_t uuid, Short_t dbcid ){
        return dbcid - dbcidAnchor[ uuid ]; // TODO: handle wrap around?
    }

    void clear(){
        dbcidHist.clear();
        dbcidAnchor.clear();
    }


protected:

    // key - unique VMM Id [0,384)
    // value - histogram (map) with key: deltaBCID, value: counts;
    map< UShort_t, map<Short_t, Int_t> > dbcidHist;

    // key - unique VMM Id [0, 384)
    // value - dbcid reference
    map< UShort_t, Short_t> dbcidAnchor;

};



#endif

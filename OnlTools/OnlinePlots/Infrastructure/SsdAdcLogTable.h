#ifndef _ADC_LOG_TABLE_
#define _ADC_LOG_TABLE_

// canonical logarithmic 10-to-8-bit and back tables
// used in the TPC and FTPC

/*  10-to-8-bit Translation Table, 0-1023:   */
//Tonko modifed it so that 1023->255, was 254 before! June 7, 2002

/*    Inverse Table, 0-255:  */

static unsigned short log8to10_table[256] = {
            0,    1,    2,    3,    4,    5,    6,    7,
            8,    9,   10,   11,   12,   13,   14,   15,
            16,   17,   18,   19,   20,   21,   22,   23,
            24,   25,   26,   27,   28,   29,   30,   31,
            32,   33,   34,   35,   36,   37,   38,   39,
            40,   41,   42,   43,   44,   45,   46,   47,
            48,   49,   50,   51,   52,   53,   54,   55,
            56,   57,   58,   59,   60,   61,   62,   63,
            64,   65,   66,   67,   68,   69,   70,   71,
            72,   73,   74,   75,   76,   77,   78,   79,
            80,   81,   82,   83,   84,   85,   86,   87,
            88,   89,   90,   91,   92,   93,   94,   95,
            96,   97,   98,   99,  100,  101,  102,  103,
            104,  105,  106,  107,  108,  110,  112,  114,
            116,  118,  120,  122,  124,  127,  129,  131,
            133,  136,  138,  140,  143,  145,  147,  150,
            152,  155,  158,  160,  163,  166,  168,  171,
            174,  177,  180,  182,  185,  188,  192,  195,
            198,  201,  204,  208,  211,  214,  218,  221,
            225,  228,  232,  236,  240,  243,  247,  251,
            255,  259,  263,  267,  271,  275,  280,  284,
            288,  293,  297,  302,  306,  311,  316,  321,
            325,  330,  335,  341,  346,  351,  356,  362,
            367,  373,  379,  384,  390,  396,  402,  408,
            414,  420,  427,  433,  439,  446,  452,  459,
            466,  473,  480,  487,  494,  502,  509,  517,
            525,  532,  540,  548,  556,  564,  573,  581,
            589,  598,  607,  615,  624,  634,  643,  652,
            662,  672,  681,  691,  701,  711,  722,  732,
            743,  753,  764,  775,  786,  798,  809,  821,
            833,  845,  857,  870,  882,  895,  907,  920,
            934,  947,  961,  975,  989, 1003, 1017, 1023 };

#endif





/***************************************************************************
 *
 * $Id: SsdAdcLogTable.h,v 1.1 2009/01/23 16:10:59 jeromel Exp $
 *
 * Author: Frank Laue, laue@bnl.gov
 ***************************************************************************
 *
 * Description:
 *
 ***************************************************************************
 *
 * $Log: SsdAdcLogTable.h,v $
 * Revision 1.1  2009/01/23 16:10:59  jeromel
 * Import from online/RTS/src/
 *
 * Revision 1.1  2007/02/27 15:23:39  laue
 * Initial version
 *
 * Revision 1.1  2006/10/04 20:31:34  laue
 * Initial Version
 *
 *
 ***************************************************************************/

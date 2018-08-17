#ifndef MULTIBYTE_H
#define MULTIBYTE_H
/********************************************************************************************/
/* Author  : Jimmy Vo                                                                       */
/* Email   : jimmy.vo.2410@gmail.com                                                        */
/********************************************************************************************/
/*                                                                                          */
/* Filename        : MultiByte.h                                                            */
/* Path            : C:\Users\Duy Vo\Desktop\GitHub\VBACodeGenerator\                       */
/* Generation Date : 8/16/2018                                                              */
/* Generation Time : 11:36:14 PM                                                            */
/* Generate by     : Duy Vo                                                                 */
/*                                                                                          */
/********************************************************************************************/
/* Auto generated file. Do not edit!                                                        */
/********************************************************************************************/



/********************************************************************************************/
/* INCLUDE                                                                                  */
/********************************************************************************************/

#include "nmh.h"
#include "can_par.h"


/********************************************************************************************/
/* Define Multi-Byte Index                                                                  */
/********************************************************************************************/

/*  Usage: May Apply for IsoTp, dynamic frame data                                          */

/********************************************************************************************/
/* Step3  -                                                                                 */
#define Step3_IDX                   0
#define Step3_SIZE                  21
    /* MsgType  -  MsgType */
    #define Step3_MsgType_IDX       0
    #define Step3_MsgType_SIZE      1
    /* Version  -  Version */
    #define Step3_Version_IDX       1
    #define Step3_Version_SIZE      1
    /* Node  -  Node */
    #define Step3_Node_IDX          2
    #define Step3_Node_SIZE         1
    /* SIG_SE_ID  -  SIG_SE_ID */
    #define Step3_SIG_SE_ID_IDX     3
    #define Step3_SIG_SE_ID_SIZE    16
    /* Status  -  Status */
    #define Step3_Status_IDX        19
    #define Step3_Status_SIZE       2

/********************************************************************************************/
/* Step7  -                                                                                 */
#define Step7_IDX                   0
#define Step7_SIZE                  21
    /* MsgType  -  MsgType */
    #define Step7_MsgType_IDX       0
    #define Step7_MsgType_SIZE      1
    /* Version  -  Version */
    #define Step7_Version_IDX       1
    #define Step7_Version_SIZE      1
    /* Node  -  Node */
    #define Step7_Node_IDX          2
    #define Step7_Node_SIZE         1
    /* SIG_SE_ID  -  SIG_SE_ID */
    #define Step7_SIG_SE_ID_IDX     3
    #define Step7_SIG_SE_ID_SIZE    16
    /* Status  -  Status */
    #define Step7_Status_IDX        19
    #define Step7_Status_SIZE       2


/********************************************************************************************/
/* DEFINE INTERFACE                                                                         */
/********************************************************************************************/

/*  Usage: Return size of Data                                                              */
/*         Copy Data from raw frame (Src_pt) to target buffer (Des_pt)                      */

/********************************************************************************************/
/* Step3  -                                                                                 */
#define GetStep3(Src_pt, Des_pt, size_pt);                  *(size_pt) = 21;\
                                                            for(u8 i = 0; i < 21; i++)\
                                                            Des_pt[i] = Src_pt[i+0];
    /* MsgType  -  MsgType */
    #define GetStep3_MsgType(Src_pt, Des_pt, size_pt);      *(size_pt) = 1;\
                                                            for(u8 i = 0; i < 1; i++)\
                                                            Des_pt[i] = Src_pt[i+0];
    /* Version  -  Version */
    #define GetStep3_Version(Src_pt, Des_pt, size_pt);      *(size_pt) = 1;\
                                                            for(u8 i = 0; i < 1; i++)\
                                                            Des_pt[i] = Src_pt[i+1];
    /* Node  -  Node */
    #define GetStep3_Node(Src_pt, Des_pt, size_pt);         *(size_pt) = 1;\
                                                            for(u8 i = 0; i < 1; i++)\
                                                            Des_pt[i] = Src_pt[i+2];
    /* SIG_SE_ID  -  SIG_SE_ID */
    #define GetStep3_SIG_SE_ID(Src_pt, Des_pt, size_pt);    *(size_pt) = 16;\
                                                            for(u8 i = 0; i < 16; i++)\
                                                            Des_pt[i] = Src_pt[i+3];
    /* Status  -  Status */
    #define GetStep3_Status(Src_pt, Des_pt, size_pt);       *(size_pt) = 2;\
                                                            for(u8 i = 0; i < 2; i++)\
                                                            Des_pt[i] = Src_pt[i+19];

/********************************************************************************************/
/* Step7  -                                                                                 */
#define GetStep7(Src_pt, Des_pt, size_pt);                  *(size_pt) = 21;\
                                                            for(u8 i = 0; i < 21; i++)\
                                                            Des_pt[i] = Src_pt[i+0];
    /* MsgType  -  MsgType */
    #define GetStep7_MsgType(Src_pt, Des_pt, size_pt);      *(size_pt) = 1;\
                                                            for(u8 i = 0; i < 1; i++)\
                                                            Des_pt[i] = Src_pt[i+0];
    /* Version  -  Version */
    #define GetStep7_Version(Src_pt, Des_pt, size_pt);      *(size_pt) = 1;\
                                                            for(u8 i = 0; i < 1; i++)\
                                                            Des_pt[i] = Src_pt[i+1];
    /* Node  -  Node */
    #define GetStep7_Node(Src_pt, Des_pt, size_pt);         *(size_pt) = 1;\
                                                            for(u8 i = 0; i < 1; i++)\
                                                            Des_pt[i] = Src_pt[i+2];
    /* SIG_SE_ID  -  SIG_SE_ID */
    #define GetStep7_SIG_SE_ID(Src_pt, Des_pt, size_pt);    *(size_pt) = 16;\
                                                            for(u8 i = 0; i < 16; i++)\
                                                            Des_pt[i] = Src_pt[i+3];
    /* Status  -  Status */
    #define GetStep7_Status(Src_pt, Des_pt, size_pt);       *(size_pt) = 2;\
                                                            for(u8 i = 0; i < 2; i++)\
                                                            Des_pt[i] = Src_pt[i+19];


/********************************************************************************************/
/* Define                                                                                   */
/********************************************************************************************/

#define   NFC_Cycle_ms  5
/* Extern Funtion */    
extern   void           NfcDataTransfer_Main(void);
extern   void           NfcDataTransfer_Init(void);
                        



/********************************************************************************************/
/* END OF FILE                                                                              */
/********************************************************************************************/

#endif

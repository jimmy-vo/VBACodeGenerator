/********************************************************************************************/
/* Author  : Jimmy Vo                                                                       */
/* Email   : jimmy.vo.2410@gmail.com                                                        */
/********************************************************************************************/
/*                                                                                          */
/* Filename        : NvM.h                                                                  */
/* Path            : C:\Users\Duy Vo\Desktop\GitHub\VBACodeGenerator\                       */
/* Generation Date : 8/16/2018                                                              */
/* Generation Time : 11:36:24 PM                                                            */
/* Generate by     : Duy Vo                                                                 */
/*                                                                                          */
/********************************************************************************************/
/* Auto generated file. Do not edit!                                                        */
/********************************************************************************************/



/********************************************************************************************/
/* INCLUDE                                                                                  */
/********************************************************************************************/

#include "test.h"


/********************************************************************************************/
/* Define                                                                                   */
/********************************************************************************************/

typedef   unsigned char   u8;
typedef   unsigned short  u16;
typedef   unsigned long   u32;
                          


/********************************************************************************************/
/* Define Variable Infos                                                                    */
/********************************************************************************************/

/* Variable    : var_0                                                                      */
/* Description : 1                                                                          */
/* Unit        : 2                                                                          */
#define PreFix_var_0_VAL           0x3F
#define PreFix_var_0_MASK          0x3F
#define PreFix_var_0_RESOLU        1
#define PreFix_var_0_OFFSET        0
#define PreFix_var_0_STARTBIT      0
#define PreFix_var_0_ENDBIT        5
#define PreFix_var_0_STARTBYTE     0
#define PreFix_var_0_ENDBYTE       0
#define PreFix_var_0_STARTBYTE_IDX 0
#define PreFix_var_0_ENDBYTE_IDX   5

/* Variable    : var_1                                                                      */
/* Description : Var_1 desc                                                                 */
/* Unit        : 3                                                                          */
#define PreFix_var_1_VAL           0x1F
#define PreFix_var_1_MASK          0x1F
#define PreFix_var_1_RESOLU        1
#define PreFix_var_1_OFFSET        0
#define PreFix_var_1_STARTBIT      6
#define PreFix_var_1_ENDBIT        10
#define PreFix_var_1_STARTBYTE     0
#define PreFix_var_1_ENDBYTE       1
#define PreFix_var_1_STARTBYTE_IDX 6
#define PreFix_var_1_ENDBYTE_IDX   2

/* Variable    : var_2                                                                      */
/* Description : Var_3 desc                                                                 */
/* Unit        : 4                                                                          */
#define PreFix_var_2_VAL           0x03FF
#define PreFix_var_2_MASK          0x03FF
#define PreFix_var_2_RESOLU        1
#define PreFix_var_2_OFFSET        0
#define PreFix_var_2_STARTBIT      11
#define PreFix_var_2_ENDBIT        20
#define PreFix_var_2_STARTBYTE     1
#define PreFix_var_2_ENDBYTE       2
#define PreFix_var_2_STARTBYTE_IDX 3
#define PreFix_var_2_ENDBYTE_IDX   4

/* Variable    : var_3                                                                      */
/* Description : Var_3 desc                                                                 */
#define PreFix_var_3_VAL           0x0000001F
#define PreFix_var_3_MASK          0x000001FF
#define PreFix_var_3_RESOLU        1
#define PreFix_var_3_OFFSET        0
#define PreFix_var_3_STARTBIT      21
#define PreFix_var_3_ENDBIT        29
#define PreFix_var_3_STARTBYTE     2
#define PreFix_var_3_ENDBYTE       3
#define PreFix_var_3_STARTBYTE_IDX 5
#define PreFix_var_3_ENDBYTE_IDX   5



/********************************************************************************************/
/* Enumerate                                                                                */
/********************************************************************************************/

typedef enum
{
   PreFix_var_0_e = 0, /* 1 */
   PreFix_var_1_e = 1, /* Var_1 desc */
   PreFix_var_2_e = 2, /* Var_3 desc */
   PreFix_var_3_e = 3, /* Var_3 desc */
   PreFix_Variable_MAX = 4
} PreFix_Variable_e;


/********************************************************************************************/
/* Define Get Raw                                                                           */
/********************************************************************************************/

#define PreFix_SETRAW_var_0()    /* 1 */ \
                                       (u8)(((u8)PreFix_RAM[0])  & 0x3F)
#define PreFix_SETRAW_var_1()    /* Var_1 desc */ \
                                       (u8)(((((u8)PreFix_RAM[0])  >> 6u) & 0x03) | \
                                       (((u8)PreFix_RAM[1] << 2u) & 0x3C))
#define PreFix_SETRAW_var_2()    /* Var_3 desc */ \
                                       (u16)(((((u16)PreFix_RAM[1])  >> 3u) & 0x001F) | \
                                       (((u16)PreFix_RAM[2] << 5u) & 0x07E0))
#define PreFix_SETRAW_var_3()    /* Var_3 desc */ \
                                       (u32)(((((u32)PreFix_RAM[2])  >> 5u) & 0x00000007) | \
                                       (((u32)PreFix_RAM[3] << 3u) & 0x000003F8))


/********************************************************************************************/
/* Define Get Scale                                                                         */
/********************************************************************************************/

#define PreFix_GETSCALE_var_0()    /* 1 */ \
                                       (u8)0 + (u8) (1 * \
                                       ((u8)(((u8)PreFix_RAM[0])  & 0x3F)))
#define PreFix_GETSCALE_var_1()    /* Var_1 desc */ \
                                       (u8)0 + (u8) (1 * \
                                       ((u8)(((((u8)PreFix_RAM[0])  >> 6u) & 0x03) | \
                                       (((u8)PreFix_RAM[1] << 2u) & 0x3C))))
#define PreFix_GETSCALE_var_2()    /* Var_3 desc */ \
                                       (u16)0 + (u16) (1 * \
                                       ((u16)(((((u16)PreFix_RAM[1])  >> 3u) & 0x001F) | \
                                       (((u16)PreFix_RAM[2] << 5u) & 0x07E0))))
#define PreFix_GETSCALE_var_3()    /* Var_3 desc */ \
                                       (u32)0 + (u32) (1 * \
                                       ((u32)(((((u32)PreFix_RAM[2])  >> 5u) & 0x00000007) | \
                                       (((u32)PreFix_RAM[3] << 3u) & 0x000003F8))))


/********************************************************************************************/
/* Define Set Raw                                                                           */
/********************************************************************************************/

#define PreFix_SETRAW_var_0(VAL)    /* 1 */ \
                                       PreFix_RAM[0] = (u8)((PreFix_RAM[0] & 0xC0) | ((u8)VAL & 0x3F))
#define PreFix_SETRAW_var_1(VAL)    /* Var_1 desc */ \
                                       PreFix_RAM[0] = (u8)((PreFix_RAM[0] & 0x3F) | ((u8)(VAL << 6u) & 0xC0)); \
                                       PreFix_RAM[1] = (u8)((PreFix_RAM[1] & 0xF8) | ((u8)(VAL >> 2u) & 0x07))
#define PreFix_SETRAW_var_2(VAL)    /* Var_3 desc */ \
                                       PreFix_RAM[1] = (u8)((PreFix_RAM[1] & 0x07) | ((u8)(VAL << 3u) & 0xF8)); \
                                       PreFix_RAM[2] = (u8)((PreFix_RAM[2] & 0xE0) | ((u8)(VAL >> 5u) & 0x1F))
#define PreFix_SETRAW_var_3(VAL)    /* Var_3 desc */ \
                                       PreFix_RAM[2] = (u8)((PreFix_RAM[2] & 0x1F) | ((u8)(VAL << 5u) & 0xE0)); \
                                       PreFix_RAM[3] = (u8)((PreFix_RAM[3] & 0xC0) | ((u8)(VAL >> 3u) & 0x3F))


/********************************************************************************************/
/* Define Set Scale                                                                         */
/********************************************************************************************/

#define PreFix_SETSCALE_var_0(VAL)    /* 1 */ \
                                           VAL = (u8)((VAL - 0)/1);\
                                           PreFix_RAM[0] = (u8)((PreFix_RAM[0] & 0xC0) | ((u8)VAL & 0x3F))
#define PreFix_SETSCALE_var_1(VAL)    /* Var_1 desc */ \
                                           VAL = (u8)((VAL - 0)/1);\
                                           PreFix_RAM[0] = (u8)((PreFix_RAM[0] & 0x3F) | ((u8)(VAL << 6u) & 0xC0)); \
                                           PreFix_RAM[1] = (u8)((PreFix_RAM[1] & 0xF8) | ((u8)(VAL >> 2u) & 0x07))
#define PreFix_SETSCALE_var_2(VAL)    /* Var_3 desc */ \
                                           VAL = (u16)((VAL - 0)/1);\
                                           PreFix_RAM[1] = (u8)((PreFix_RAM[1] & 0x07) | ((u8)(VAL << 3u) & 0xF8)); \
                                           PreFix_RAM[2] = (u8)((PreFix_RAM[2] & 0xE0) | ((u8)(VAL >> 5u) & 0x1F))
#define PreFix_SETSCALE_var_3(VAL)    /* Var_3 desc */ \
                                           VAL = (u32)((VAL - 0)/1);\
                                           PreFix_RAM[2] = (u8)((PreFix_RAM[2] & 0x1F) | ((u8)(VAL << 5u) & 0xE0)); \
                                           PreFix_RAM[3] = (u8)((PreFix_RAM[3] & 0xC0) | ((u8)(VAL >> 3u) & 0x3F))


/********************************************************************************************/
/* Extern Interface                                                                         */
/********************************************************************************************/

/* Fetch RAM []*/
#define PreFix_GetFetchRamReq(index)     (booleant_t)PreFix_FETCHRAMREQ[index]
#define PreFix_SetFetchRamReq(index)     PreFix_FETCHRAMREQ[index] = TRUE
#define PreFix_ClearFetchRamReq(index)     PreFix_FETCHRAMREQ[index] = FALSE

/* Fetch RAM */
#define PreFix_GetFetchRamFlag()     (booleant_t)PreFix_FETCHRAMREQFlag
#define PreFix_SetFetchRamFlag()     PreFix_FETCHRAMREQFlag = TRUE
#define PreFix_ClearFetchRamFlag()     PreFix_FETCHRAMREQFlag = FALSE

/* Push RAM [] */
#define PreFix_GetPushRamReq(index)     (booleant_t)PreFix_PUSHRAMREQ[index]
#define PreFix_SetPushRamReq(index)     PreFix_PUSHRAMREQ[index] = TRUE
#define PreFix_ClearPushRamReq(index)     PreFix_PUSHRAMREQ[index] = FALSE

/* Push RAM */
#define PreFix_SetPushRamFlag()     PreFix_PUSHRAMREQFlag = TRUE
#define PreFix_ClearPushRamFlag()     PreFix_PUSHRAMREQFlag = FALSE
#define PreFix_GetPushRamFlag()     (booleant_t)PreFix_PUSHRAMREQFlag


/********************************************************************************************/
/* Extern Variable                                                                          */
/********************************************************************************************/

extern u8 PreFix_RAM[4];
extern u8 PreFix_MASK[4];
extern u8 PreFix_FETCHRAMREQ[4];
extern boolean_t PreFix_FETCHRAMREQFlag;
extern u8 PreFix_PUSHRAMREQ[4];
extern boolean_t PreFix_PUSHRAMREQFlag;


/********************************************************************************************/
/* Define User Config Interface                                                             */
/********************************************************************************************/

#ifndef PreFix_Fetch(index)
#define PreFix_Fetch(index)
#endif
#ifndef PreFix_FetchAll()
#define PreFix_FetchAll()
#endif
#ifndef PreFix_Push(index)
#define PreFix_Push(index)
#endif
#ifndef PreFix_PushAll()
#define PreFix_PushAll()
#endif



/********************************************************************************************/
/* END OF FILE                                                                              */
/********************************************************************************************/


#endif



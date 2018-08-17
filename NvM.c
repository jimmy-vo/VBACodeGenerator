/********************************************************************************************/
/* Author  : Jimmy Vo                                                                       */
/* Email   : jimmy.vo.2410@gmail.com                                                        */
/********************************************************************************************/
/*                                                                                          */
/* Filename        : NvM.c                                                                  */
/* Path            : C:\Users\Duy Vo\Desktop\GitHub\VBACodeGenerator\                       */
/* Generation Date : 8/16/2018                                                              */
/* Generation Time : 11:36:24 PM                                                            */
/* Generate by     : Duy Vo                                                                 */
/*                                                                                          */
/********************************************************************************************/
/* Auto generated file. Do not edit!                                                        */
/********************************************************************************************/

/* Support: Auto Update RAM buffer from Bus/NvM/Peripheral by request                       */
/*          Set and Get inteface to RAM                                                     */
/* Limited: Be careful overfloat conversion (resolution and offset                          */
/*          Don't have conversion interface, should manage by Appl                          */


/********************************************************************************************/
/* Includes                                                                                 */
/********************************************************************************************/

#include "NvM.h"


/********************************************************************************************/
/* Global Variable                                                                          */
/********************************************************************************************/

boolean_t PreFix_FETCHRAMREQFlag;
boolean_t PreFix_PUSHRAMREQFlag;
u8 PreFix_RAM[];

const u32 PreFix_DEFAULT[4] = 
{
   /* var_0 */ 0x3F ,
   /* var_1 */ 0x1F ,
   /* var_2 */ 0x03FF ,
   /* var_3 */ 0x0000001F  
};

const u32 PreFix_MASK[4] = 
{
   /* var_0 */ 0x3F ,
   /* var_1 */ 0x1F ,
   /* var_2 */ 0x03FF ,
   /* var_3 */ 0x000001FF  
};

const u32 PreFix_FETCHRAMREQ[4] = 
{
   /* var_0 */ 0x00 /*No request on init*/ ,
   /* var_1 */ 0x00 /*No request on init*/ ,
   /* var_2 */ 0x00 /*No request on init*/ ,
   /* var_3 */ 0x00 /*No request on init*/  
};

const u32 PreFix_PUSHRAMREQ[4] = 
{
   /* var_0 */ 0x00 /*No request on init*/ ,
   /* var_1 */ 0x00 /*No request on init*/ ,
   /* var_2 */ 0x00 /*No request on init*/ ,
   /* var_3 */ 0x00 /*No request on init*/  
};


/********************************************************************************************/
/* Public Function                                                                          */
/********************************************************************************************/


/* PreFix_Get                                                                               */
/* Description: Input: enum label                                                           */
/*              Return: u32 Raw Value on RAM (Exclude conversion)                           */
u32 PreFix_Get(PreFix_Variableindex)
{
   u32 res = 0;
   switch(index)
   {
       case PreFix_var_0_e :
           res = (u32)(PreFix_GETRAW_var_0());
       break:
       case PreFix_var_1_e :
           res = (u32)(PreFix_GETRAW_var_1());
       break:
       case PreFix_var_2_e :
           res = (u32)(PreFix_GETRAW_var_2());
       break:
       case PreFix_var_3_e :
           res = (u32)(PreFix_GETRAW_var_3());
       break:
   }
   return res;
}

/* PreFix_Set                                                                               */
/* Description: Imput: enum label, u32 value                                                */
/*              auto convert to element's type respetively                                  */
void PreFix_Set(PreFix_Variableindex, u32 value)
{
   switch(indxe)
   {
       case PreFix_var_0_e :
           PreFix_SETRAW_var_0((u8)value);
       break:
       case PreFix_var_1_e :
           PreFix_SETRAW_var_1((u8)value);
       break:
       case PreFix_var_2_e :
           PreFix_SETRAW_var_2((u16)value);
       break:
       case PreFix_var_3_e :
           PreFix_SETRAW_var_3((u32)value);
       break:
   }
}

/* PreFix_Init                                                                              */
/* Description: Check request for each element, main will update them                       */
void PreFix_Init(void)
{
   if((u8)PreFix_MASK[0] == PreFix_GETRAW_var_0())
   {/* if value is empty -> Request to fetch RAM buffer*/
       PreFix_SetFetchRamReq(0); /* Request to read data to the bus */
   } else {/* do nothing */}
   if((u8)PreFix_MASK[1] == PreFix_GETRAW_var_1())
   {/* if value is empty -> Request to fetch RAM buffer*/
       PreFix_SetFetchRamReq(1); /* Request to read data to the bus */
   } else {/* do nothing */}
   if((u16)PreFix_MASK[2] == PreFix_GETRAW_var_2())
   {/* if value is empty -> Request to fetch RAM buffer*/
       PreFix_SetFetchRamReq(2); /* Request to read data to the bus */
   } else {/* do nothing */}
   if((u32)PreFix_MASK[3] == PreFix_GETRAW_var_3())
   {/* if value is empty -> Request to fetch RAM buffer*/
       PreFix_SetFetchRamReq(3); /* Request to read data to the bus */
   } else {/* do nothing */}
/* Main will do fetching RAM buffer after this, application needs to read ram again */
}


/* PreFix_Main                                                                              */
/* Description: Check request for each element, main will update them                       */
void PreFix_Main(void)
{
   boolean_t IsPushReq_bl = FALSE; /* Push and Fetch can't be done at the same time*/

   if (FALSE = PreFix_GetPushRamFlag())
   { /* no request for pushing all RAM --> check for individual*/
       for(PreFix_Variable i = PreFix_var_0_e; i < PreFix_Variable_Max; i++) 
       {
           if(TRUE = PreFix_GetPushRamReq(i))
           {
               PreFix_Push(i);
               IsPushReq_bl = TRUE;
           }
       }
   }
   else
   {
       PreFix_PushAll();
       IsPushReq_bl = TRUE;
   }

   if (FALSE == IsPushReq_bl)
   {
       if (FALSE = PreFix_GetFetchRamFlag())
       { /* no request for update all --> check for individual*/
           for(PreFix_Variable i = PreFix_var_0_e; i < PreFix_Variable_Max; i++) 
           {
               if(TRUE = PreFix_GetFetchRamReq(i))
               {
                  PreFix_Fetch(i);
               }
           }
       }
       else
       {
           PreFix_FetchAll();
       }
   } else {/* do nothing */}
}



/********************************************************************************************/
/* END OF FILE                                                                              */
/********************************************************************************************/




#ifdef ___LINKER_INFO
; File: "init.c", produced by Gambit-C v4.5.2
(
405002
" init"
(" init")
(
)
(
)
(
" init"
)
(
)
(
"display"
"my-add"
"my-mult"
"my-sub"
"println"
)
 #f
)
#else
#define ___VERSION 405002
#define ___MODULE_NAME " init"
#define ___LINKER_ID ____20_init
#define ___MH_PROC ___H__20_init
#define ___SCRIPT_LINE 0
#define ___GLO_COUNT 6
#define ___SUP_COUNT 1
#define ___SUB_COUNT 4
#define ___LBL_COUNT 10
#include "gambit.h"

___NEED_GLO(___G__20_init)
___NEED_GLO(___G_display)
___NEED_GLO(___G_my_2d_add)
___NEED_GLO(___G_my_2d_mult)
___NEED_GLO(___G_my_2d_sub)
___NEED_GLO(___G_println)

___BEGIN_GLO
___DEF_GLO(0," init")
___DEF_GLO(1,"display")
___DEF_GLO(2,"my-add")
___DEF_GLO(3,"my-mult")
___DEF_GLO(4,"my-sub")
___DEF_GLO(5,"println")
___END_GLO

___DEF_SUB_STR(___X0,18)
               ___STR8(72,101,108,108,111,32,102,114)
               ___STR8(111,109,32,83,99,104,101,109)
               ___STR2(101,10)
___DEF_SUB_STR(___X1,13)
               ___STR8(83,117,109,40,52,48,44,32)
               ___STR5(51,41,32,61,32)
___DEF_SUB_STR(___X2,14)
               ___STR8(68,105,102,102,40,52,53,44)
               ___STR6(32,51,41,32,61,32)
___DEF_SUB_STR(___X3,13)
               ___STR8(77,117,108,116,40,57,44,32)
               ___STR5(51,41,32,61,32)

___BEGIN_SUB
 ___DEF_SUB(___X0)
,___DEF_SUB(___X1)
,___DEF_SUB(___X2)
,___DEF_SUB(___X3)
___END_SUB



#undef ___MD_ALL
#define ___MD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___MR_ALL
#define ___MR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_init)
___DEF_M_HLBL(___L1__20_init)
___DEF_M_HLBL(___L2__20_init)
___DEF_M_HLBL(___L3__20_init)
___DEF_M_HLBL(___L4__20_init)
___DEF_M_HLBL(___L5__20_init)
___DEF_M_HLBL(___L6__20_init)
___DEF_M_HLBL(___L7__20_init)
___DEF_M_HLBL(___L8__20_init)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H__20_init
#undef ___PH_LBL0
#define ___PH_LBL0 1
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_init)
___DEF_P_HLBL(___L1__20_init)
___DEF_P_HLBL(___L2__20_init)
___DEF_P_HLBL(___L3__20_init)
___DEF_P_HLBL(___L4__20_init)
___DEF_P_HLBL(___L5__20_init)
___DEF_P_HLBL(___L6__20_init)
___DEF_P_HLBL(___L7__20_init)
___DEF_P_HLBL(___L8__20_init)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_init)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L__20_init)
   ___SET_STK(1,___R0)
   ___SET_R1(___SUB(0))
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1__20_init)
   ___JUMPGLOSAFE(___SET_NARGS(1),1,___G_display)
___DEF_SLBL(2,___L2__20_init)
   ___SET_R2(___FIX(3L))
   ___SET_R1(___FIX(40L))
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(2),2,___G_my_2d_add)
___DEF_SLBL(3,___L3__20_init)
   ___SET_R2(___R1)
   ___SET_R1(___SUB(1))
   ___SET_R0(___LBL(4))
   ___JUMPGLOSAFE(___SET_NARGS(2),5,___G_println)
___DEF_SLBL(4,___L4__20_init)
   ___SET_R2(___FIX(3L))
   ___SET_R1(___FIX(45L))
   ___SET_R0(___LBL(5))
   ___JUMPGLOSAFE(___SET_NARGS(2),4,___G_my_2d_sub)
___DEF_SLBL(5,___L5__20_init)
   ___SET_R2(___R1)
   ___SET_R1(___SUB(2))
   ___SET_R0(___LBL(6))
   ___JUMPGLOSAFE(___SET_NARGS(2),5,___G_println)
___DEF_SLBL(6,___L6__20_init)
   ___SET_R2(___FIX(3L))
   ___SET_R1(___FIX(9L))
   ___SET_R0(___LBL(7))
   ___JUMPGLOSAFE(___SET_NARGS(2),3,___G_my_2d_mult)
___DEF_SLBL(7,___L7__20_init)
   ___SET_R2(___R1)
   ___SET_R1(___SUB(3))
   ___SET_R0(___STK(-3))
   ___POLL(8)
___DEF_SLBL(8,___L8__20_init)
   ___ADJFP(-4)
   ___JUMPGLOSAFE(___SET_NARGS(2),5,___G_println)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H__20_init," init",___REF_FAL,9,0)
,___DEF_LBL_PROC(___H__20_init,0,0)
,___DEF_LBL_RET(___H__20_init,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H__20_init,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H__20_init,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H__20_init,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H__20_init,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H__20_init,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H__20_init,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H__20_init,___IFD(___RETI,4,4,0x3f0L))
___END_LBL

___BEGIN_MOD1
___DEF_PRM(0,___G__20_init,1)
___END_MOD1

___BEGIN_MOD2
___END_MOD2

#endif

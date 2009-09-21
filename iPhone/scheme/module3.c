#ifdef ___LINKER_INFO
; File: "module3.c", produced by Gambit-C v4.5.2
(
405002
" module3"
(" module3")
(
)
(
)
(
" module3"
)
(
"my-mult"
)
(
"*"
)
 #f
)
#else
#define ___VERSION 405002
#define ___MODULE_NAME " module3"
#define ___LINKER_ID ____20_module3
#define ___MH_PROC ___H__20_module3
#define ___SCRIPT_LINE 0
#define ___GLO_COUNT 3
#define ___SUP_COUNT 2
#define ___LBL_COUNT 6
#include "gambit.h"

___NEED_GLO(___G__20_module3)
___NEED_GLO(___G__2a_)
___NEED_GLO(___G_my_2d_mult)

___BEGIN_GLO
___DEF_GLO(0," module3")
___DEF_GLO(1,"my-mult")
___DEF_GLO(2,"*")
___END_GLO


#undef ___MD_ALL
#define ___MD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4 ___D_F64(___F64V1) ___D_F64( \
___F64V2) ___D_F64(___F64V3)
#undef ___MR_ALL
#define ___MR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_HEAP ___W_R1 ___W_R3 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_module3)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_my_2d_mult)
___DEF_M_HLBL(___L1_my_2d_mult)
___DEF_M_HLBL(___L2_my_2d_mult)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H__20_module3
#undef ___PH_LBL0
#define ___PH_LBL0 1
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_module3)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_module3)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L__20_module3)
   ___SET_GLO(1,___G_my_2d_mult,___PRC(3))
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_my_2d_mult
#undef ___PH_LBL0
#define ___PH_LBL0 3
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4 ___D_F64(___F64V1) ___D_F64( \
___F64V2) ___D_F64(___F64V3)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_R1 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_my_2d_mult)
___DEF_P_HLBL(___L1_my_2d_mult)
___DEF_P_HLBL(___L2_my_2d_mult)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_my_2d_mult)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_my_2d_mult)
   ___IF(___NOT(___EQP(___GLO(2,___G__2a_),___PRM(2,___G__2a_))))
   ___GOTO(___L4_my_2d_mult)
   ___END_IF
   ___IF(___NOT(___FIXNUMP(___R2)))
   ___GOTO(___L7_my_2d_mult)
   ___END_IF
   ___IF(___NOT(___FIXNUMP(___R1)))
   ___GOTO(___L7_my_2d_mult)
   ___END_IF
   ___IF(___EQP(___R2,___FIX(0L)))
   ___GOTO(___L6_my_2d_mult)
   ___END_IF
   ___IF(___NOT(___EQP(___R2,___FIX(-1L))))
   ___GOTO(___L3_my_2d_mult)
   ___END_IF
   ___SET_R3(___FIXNEGP(___R1))
   ___IF(___FALSEP(___R3))
   ___GOTO(___L4_my_2d_mult)
   ___END_IF
   ___GOTO(___L5_my_2d_mult)
___DEF_GLBL(___L3_my_2d_mult)
   ___SET_R3(___FIXMULP(___R1,___R2))
   ___IF(___NOT(___FALSEP(___R3)))
   ___GOTO(___L5_my_2d_mult)
   ___END_IF
___DEF_GLBL(___L4_my_2d_mult)
   ___POLL(1)
___DEF_SLBL(1,___L1_my_2d_mult)
   ___JUMPGLOSAFE(___SET_NARGS(2),2,___G__2a_)
___DEF_GLBL(___L5_my_2d_mult)
   ___SET_R1(___R3)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L6_my_2d_mult)
   ___SET_R1(___FIX(0L))
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L7_my_2d_mult)
   ___IF(___NOT(___FLONUMP(___R2)))
   ___GOTO(___L4_my_2d_mult)
   ___END_IF
   ___IF(___NOT(___FLONUMP(___R1)))
   ___GOTO(___L4_my_2d_mult)
   ___END_IF
   ___SET_F64(___F64V1,___F64UNBOX(___R1))
   ___SET_F64(___F64V2,___F64UNBOX(___R2))
   ___SET_F64(___F64V3,___F64MUL(___F64V1,___F64V2))
   ___SET_R1(___F64BOX(___F64V3))
   ___CHECK_HEAP(2,4096)
___DEF_SLBL(2,___L2_my_2d_mult)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H__20_module3," module3",___REF_FAL,1,0)
,___DEF_LBL_PROC(___H__20_module3,0,0)
,___DEF_LBL_INTRO(___H_my_2d_mult,0,___REF_FAL,3,0)
,___DEF_LBL_PROC(___H_my_2d_mult,2,0)
,___DEF_LBL_RET(___H_my_2d_mult,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_my_2d_mult,___IFD(___RETI,0,0,0x3fL))
___END_LBL

___BEGIN_MOD1
___DEF_PRM(0,___G__20_module3,1)
___END_MOD1

___BEGIN_MOD2
___END_MOD2

#endif

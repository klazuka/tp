//
// Generated By: dol2asm
// Translation Unit: d_a_ykgr
//

#include "rel/d/a/d_a_ykgr/d_a_ykgr.h"
#include "dol2asm.h"

//
// Types:
//

struct mDoMtx_stack_c {
    static u8 now[48];
};

struct mDoHIO_entry_c {
    /* 805A8DF4 */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daYkgr_c {
    /* 805A85D4 */ void getPosRate();

    static u8 m_aim_rate[4];
    static u8 m_path[4];
    static u8 m_emitter[4];
};

struct daYkgr_HIO_c {
    /* 805A8D98 */ ~daYkgr_HIO_c();
};

struct dPa_levelEcallBack {};

struct dKy_tevstr_c {};

struct csXyz {};

struct _GXColor {};

struct cXyz {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct JPABaseParticle {};

struct JPABaseEmitter {};

struct dPa_YkgrPcallBack {
    /* 805A848C */ void draw(JPABaseEmitter*, JPABaseParticle*);
    /* 805A84D4 */ void setParam(f32);
    /* 805A8E3C */ ~dPa_YkgrPcallBack();
};

struct JPAParticleCallBack {
    /* 8027EFA4 */ ~JPAParticleCallBack();
    /* 805A8E9C */ void execute(JPABaseEmitter*, JPABaseParticle*);
    /* 805A8FA4 */ void draw(JPABaseEmitter*, JPABaseParticle*);
};

struct JGeometry {
    template <typename A1>
    struct TVec3 {};
    /* TVec3<f32> */
    struct TVec3__template0 {};
};

//
// Forward References:
//

extern "C" void draw__17dPa_YkgrPcallBackFP14JPABaseEmitterP15JPABaseParticle();
extern "C" void setParam__17dPa_YkgrPcallBackFf();
extern "C" void getPosRate__8daYkgr_cFv();
extern "C" static void daYkgrCreate__FPv();
extern "C" static bool daYkgrDelete__FPv();
extern "C" static void daYkgrExecute__FPv();
extern "C" static void daYkgrDraw__FPv();
extern "C" static bool daYkgrIsDelete__FPv();
extern "C" void __dt__12daYkgr_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void __dt__17dPa_YkgrPcallBackFv();
extern "C" void execute__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle();
extern "C" void __sinit_d_a_ykgr_cpp();
extern "C" void draw__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle();
extern "C" extern char const* const d_a_ykgr__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_setStageLayer__FPv();
extern "C" void dComIfGs_BossLife_public_Get__Fv();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void dKyr_get_vectle_calc__FP4cXyzP4cXyzP4cXyz();
extern "C" void cM_atan2s__Fff();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void __dt__19JPAParticleCallBackFv();
extern "C" void func_802807E0();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSVECSquareDistance();
extern "C" void GXSetIndTexMtx();
extern "C" void GXSetTevAlphaIn();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void strcmp();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 __float_nan;
extern "C" extern u32 __float_max;
extern "C" extern u8 struct_80450D8C[4];
extern "C" u8 m_aim_rate__8daYkgr_c[4];
extern "C" u8 m_path__8daYkgr_c[4];
extern "C" u8 m_emitter__8daYkgr_c[4];
extern "C" void __register_global_object();

//
// Declarations:
//

/* 805A848C-805A84D4 0000EC 0048+00 1/0 0/0 0/0 .text
 * draw__17dPa_YkgrPcallBackFP14JPABaseEmitterP15JPABaseParticle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dPa_YkgrPcallBack::draw(JPABaseEmitter* param_0, JPABaseParticle* param_1) {
    nofralloc
#include "asm/rel/d/a/d_a_ykgr/d_a_ykgr/draw__17dPa_YkgrPcallBackFP14JPABaseEmitterP15JPABaseParticle.s"
}
#pragma pop

/* ############################################################################################## */
/* 805A8FBC-805A8FC0 000000 0004+00 6/6 0/0 0/0 .rodata          @3759 */
SECTION_RODATA static f32 const lit_3759 = -17.0f;
COMPILER_STRIP_GATE(0x805A8FBC, &lit_3759);

/* 805A8FC0-805A8FC4 000004 0004+00 0/1 0/0 0/0 .rodata          @3760 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3760 = 47.0f;
COMPILER_STRIP_GATE(0x805A8FC0, &lit_3760);
#pragma pop

/* 805A8FC4-805A8FC8 000008 0004+00 0/5 0/0 0/0 .rodata          @3761 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3761[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x805A8FC4, &lit_3761);
#pragma pop

/* 805A8FC8-805A8FCC 00000C 0004+00 0/4 0/0 0/0 .rodata          @3762 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3762 = 0.5f;
COMPILER_STRIP_GATE(0x805A8FC8, &lit_3762);
#pragma pop

/* 805A8FCC-805A8FD4 000010 0004+04 0/4 0/0 0/0 .rodata          @3763 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3763[1 + 1 /* padding */] = {
    1.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x805A8FCC, &lit_3763);
#pragma pop

/* 805A8FD4-805A8FDC 000018 0008+00 0/2 0/0 0/0 .rodata          @3766 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3766[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805A8FD4, &lit_3766);
#pragma pop

/* 805A84D4-805A85D4 000134 0100+00 2/2 0/0 0/0 .text            setParam__17dPa_YkgrPcallBackFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dPa_YkgrPcallBack::setParam(f32 param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ykgr/d_a_ykgr/setParam__17dPa_YkgrPcallBackFf.s"
}
#pragma pop

/* ############################################################################################## */
/* 805A8FDC-805A8FE4 000020 0008+00 0/1 0/0 0/0 .rodata          @3846 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3846[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805A8FDC, &lit_3846);
#pragma pop

/* 805A8FE4-805A8FEC 000028 0008+00 0/1 0/0 0/0 .rodata          @3847 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3847[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805A8FE4, &lit_3847);
#pragma pop

/* 805A8FEC-805A8FF4 000030 0008+00 0/1 0/0 0/0 .rodata          @3848 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3848[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805A8FEC, &lit_3848);
#pragma pop

/* 805A90B8-805A90BC 000008 0001+03 1/1 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 805A90BC-805A90C0 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 805A90C0-805A90C4 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 805A90C4-805A90C8 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 805A90C8-805A90CC 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 805A90CC-805A90D0 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 805A90D0-805A90D4 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 805A90D4-805A90D8 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 805A90D8-805A90DC 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 805A90DC-805A90E0 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 805A90E0-805A90E4 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 805A90E4-805A90E8 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 805A90E8-805A90EC 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 805A90EC-805A90F0 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 805A90F0-805A90F4 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 805A90F4-805A90F8 000044 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 805A90F8-805A9104 000048 000C+00 0/1 0/0 0/0 .bss             @3744 */
#pragma push
#pragma force_active on
static u8 lit_3744[12];
#pragma pop

/* 805A9104-805A912C 000054 0028+00 2/3 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[40];

/* 805A85D4-805A882C 000234 0258+00 1/1 0/0 0/0 .text            getPosRate__8daYkgr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daYkgr_c::getPosRate() {
    nofralloc
#include "asm/rel/d/a/d_a_ykgr/d_a_ykgr/getPosRate__8daYkgr_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805A8FF4-805A8FF8 000038 0004+00 0/2 0/0 0/0 .rodata          @3951 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3951 = -3.0f;
COMPILER_STRIP_GATE(0x805A8FF4, &lit_3951);
#pragma pop

/* 805A912C-805A9138 00007C 000C+00 0/1 0/0 0/0 .bss             @3851 */
#pragma push
#pragma force_active on
static u8 lit_3851[12];
#pragma pop

/* 805A9138-805A9158 000088 0020+00 2/3 0/0 0/0 .bss             YkgrCB */
static u8 YkgrCB[32];

/* 805A882C-805A8A48 00048C 021C+00 1/0 0/0 0/0 .text            daYkgrCreate__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daYkgrCreate(void* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ykgr/d_a_ykgr/daYkgrCreate__FPv.s"
}
#pragma pop

/* 805A8A48-805A8A50 0006A8 0008+00 1/0 0/0 0/0 .text            daYkgrDelete__FPv */
static bool daYkgrDelete(void* param_0) {
    return true;
}

/* ############################################################################################## */
/* 805A8FF8-805A8FFC 00003C 0004+00 0/1 0/0 0/0 .rodata          @3976 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3976 = 0.25f;
COMPILER_STRIP_GATE(0x805A8FF8, &lit_3976);
#pragma pop

/* 805A8FFC-805A9000 000040 0004+00 0/1 0/0 0/0 .rodata          @3977 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3977 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x805A8FFC, &lit_3977);
#pragma pop

/* 805A8A50-805A8BBC 0006B0 016C+00 1/0 0/0 0/0 .text            daYkgrExecute__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daYkgrExecute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ykgr/d_a_ykgr/daYkgrExecute__FPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805A9000-805A9004 000044 0004+00 0/1 0/0 0/0 .rodata          @4032 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4032 = 100.0f;
COMPILER_STRIP_GATE(0x805A9000, &lit_4032);
#pragma pop

/* 805A9004-805A9008 000048 0004+00 0/1 0/0 0/0 .rodata          @4033 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4033 = 255.0f;
COMPILER_STRIP_GATE(0x805A9004, &lit_4033);
#pragma pop

/* 805A9018-805A9018 00005C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_805A9018 = "D_MN04A";
#pragma pop

/* 805A8BBC-805A8D90 00081C 01D4+00 1/0 0/0 0/0 .text            daYkgrDraw__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daYkgrDraw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_ykgr/d_a_ykgr/daYkgrDraw__FPv.s"
}
#pragma pop

/* 805A8D90-805A8D98 0009F0 0008+00 1/0 0/0 0/0 .text            daYkgrIsDelete__FPv */
static bool daYkgrIsDelete(void* param_0) {
    return true;
}

/* ############################################################################################## */
/* 805A9020-805A9040 -00001 0020+00 1/0 0/0 0/0 .data            daYkgrMethodTable */
SECTION_DATA static void* daYkgrMethodTable[8] = {
    (void*)daYkgrCreate__FPv,
    (void*)daYkgrDelete__FPv,
    (void*)daYkgrExecute__FPv,
    (void*)daYkgrIsDelete__FPv,
    (void*)daYkgrDraw__FPv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 805A9040-805A9070 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Ykgr */
SECTION_DATA extern void* g_profile_Ykgr[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02BC0000, (void*)&g_fpcLf_Method,
    (void*)0x000005AC, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01AE0000, (void*)&daYkgrMethodTable,
    (void*)0x00044000, (void*)NULL,
};

/* 805A9070-805A9084 000050 0014+00 2/2 0/0 0/0 .data            __vt__17dPa_YkgrPcallBack */
SECTION_DATA extern void* __vt__17dPa_YkgrPcallBack[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17dPa_YkgrPcallBackFv,
    (void*)execute__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle,
    (void*)draw__17dPa_YkgrPcallBackFP14JPABaseEmitterP15JPABaseParticle,
};

/* 805A9084-805A9098 000064 0014+00 1/1 0/0 0/0 .data            __vt__19JPAParticleCallBack */
SECTION_DATA extern void* __vt__19JPAParticleCallBack[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)NULL,
    (void*)execute__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle,
    (void*)draw__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle,
};

/* 805A9098-805A90A4 000078 000C+00 2/2 0/0 0/0 .data            __vt__12daYkgr_HIO_c */
SECTION_DATA extern void* __vt__12daYkgr_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daYkgr_HIO_cFv,
};

/* 805A90A4-805A90B0 000084 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 805A8D98-805A8DF4 0009F8 005C+00 2/1 0/0 0/0 .text            __dt__12daYkgr_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daYkgr_HIO_c::~daYkgr_HIO_c() {
    nofralloc
#include "asm/rel/d/a/d_a_ykgr/d_a_ykgr/__dt__12daYkgr_HIO_cFv.s"
}
#pragma pop

/* 805A8DF4-805A8E3C 000A54 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/d_a_ykgr/d_a_ykgr/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 805A8E3C-805A8E9C 000A9C 0060+00 2/1 0/0 0/0 .text            __dt__17dPa_YkgrPcallBackFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dPa_YkgrPcallBack::~dPa_YkgrPcallBack() {
    nofralloc
#include "asm/rel/d/a/d_a_ykgr/d_a_ykgr/__dt__17dPa_YkgrPcallBackFv.s"
}
#pragma pop

/* 805A8E9C-805A8EA0 000AFC 0004+00 2/0 0/0 0/0 .text
 * execute__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle */
void JPAParticleCallBack::execute(JPABaseEmitter* param_0, JPABaseParticle* param_1) {
    /* empty function */
}

/* ############################################################################################## */
/* 805A9008-805A900C 00004C 0004+00 0/1 0/0 0/0 .rodata          @4061 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4061 = -16.0f;
COMPILER_STRIP_GATE(0x805A9008, &lit_4061);
#pragma pop

/* 805A900C-805A9010 000050 0004+00 0/1 0/0 0/0 .rodata          @4062 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4062 = -5.0f;
COMPILER_STRIP_GATE(0x805A900C, &lit_4062);
#pragma pop

/* 805A9010-805A9014 000054 0004+00 0/1 0/0 0/0 .rodata          @4063 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4063 = 1500.0f;
COMPILER_STRIP_GATE(0x805A9010, &lit_4063);
#pragma pop

/* 805A9014-805A9018 000058 0004+00 0/1 0/0 0/0 .rodata          @4064 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4064 = 500.0f;
COMPILER_STRIP_GATE(0x805A9014, &lit_4064);
#pragma pop

/* 805A8EA0-805A8FA4 000B00 0104+00 0/0 1/0 0/0 .text            __sinit_d_a_ykgr_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_ykgr_cpp() {
    nofralloc
#include "asm/rel/d/a/d_a_ykgr/d_a_ykgr/__sinit_d_a_ykgr_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x805A8EA0, __sinit_d_a_ykgr_cpp);
#pragma pop

/* 805A8FA4-805A8FA8 000C04 0004+00 1/0 0/0 0/0 .text
 * draw__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle */
void JPAParticleCallBack::draw(JPABaseEmitter* param_0, JPABaseParticle* param_1) {
    /* empty function */
}

/* ############################################################################################## */
/* 805A9158-805A915C 0000A8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_805A9158[4];
#pragma pop

/* 805A915C-805A9160 0000AC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_805A915C[4];
#pragma pop

/* 805A9160-805A9164 0000B0 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_805A9160[4];
#pragma pop

/* 805A9164-805A9168 0000B4 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_805A9164[4];
#pragma pop

/* 805A9168-805A916C 0000B8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805A9168[4];
#pragma pop

/* 805A916C-805A9170 0000BC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805A916C[4];
#pragma pop

/* 805A9170-805A9174 0000C0 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_805A9170[4];
#pragma pop

/* 805A9174-805A9178 0000C4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_805A9174[4];
#pragma pop

/* 805A9178-805A917C 0000C8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_805A9178[4];
#pragma pop

/* 805A917C-805A9180 0000CC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_805A917C[4];
#pragma pop

/* 805A9180-805A9184 0000D0 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_805A9180[4];
#pragma pop

/* 805A9184-805A9188 0000D4 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_805A9184[4];
#pragma pop

/* 805A9188-805A918C 0000D8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_805A9188[4];
#pragma pop

/* 805A918C-805A9190 0000DC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805A918C[4];
#pragma pop

/* 805A9190-805A9194 0000E0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_805A9190[4];
#pragma pop

/* 805A9194-805A9198 0000E4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_805A9194[4];
#pragma pop

/* 805A9198-805A919C 0000E8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_805A9198[4];
#pragma pop

/* 805A919C-805A91A0 0000EC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_805A919C[4];
#pragma pop

/* 805A91A0-805A91A4 0000F0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_805A91A0[4];
#pragma pop

/* 805A91A4-805A91A8 0000F4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_805A91A4[4];
#pragma pop

/* 805A91A8-805A91AC 0000F8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_805A91A8[4];
#pragma pop

/* 805A91AC-805A91B0 0000FC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805A91AC[4];
#pragma pop

/* 805A91B0-805A91B4 000100 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805A91B0[4];
#pragma pop

/* 805A91B4-805A91B8 000104 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805A91B4[4];
#pragma pop

/* 805A91B8-805A91BC 000108 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_805A91B8[4];
#pragma pop

/* 805A9018-805A9018 00005C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */

#ifndef D_A_TAG_KMSG_H
#define D_A_TAG_KMSG_H

#include "f_op/f_op_actor_mng.h"
#include "d/msg/d_msg_flow.h"
#include "SSystem/SComponent/c_phase.h"

struct daTag_KMsg_c : public fopAc_ac_c {
private:
    /* 0x568 */ request_of_phase_process_class mPhase;
    /* 0x570 */ dMsgFlow_c mMsgFlow;
    /* 0x5BC */ s32 mFlowNo;
    /* 0x5C0 */ s16 field_0x5c0;
    /* 0x5C2 */ u8 field_0x5c2;
    /* 0x5C3 */ u8 padding[5]; // maybe
    /* 0x5C8 */ // vtable
    /* Size: 0x5CC */

public:
    /* 8048DE78 */ int create();
    /* 8048DFDC */ int Delete();
    /* 8048E010 */ void Execute();
    /* 8048E8B8 */ bool Draw();
    /* 8048E8C0 */ BOOL isDelete();
    /* 8048EA30 */ virtual ~daTag_KMsg_c();
    daTag_KMsg_c() {};

    void stabMasterSword() { field_0x5c2 = 1; }

    u8 getBitSW() { return orig.angle.x & 0xff; }

    int getType() {
        int param = fopAcM_GetParam(this) >> 0x18;
        int type;

        if (param == 0xFF) {
            type = 0;
        } else {
            type = param;
        }

        return type;
    }

    u32 getFlowNodeNo() {
        u32 result = orig.angle.z & 0xffff;
        if (result == 0xffff) {
            return 0xffffffff;
        } else {
            return result;
        }
    }
};

#endif /* D_A_TAG_KMSG_H */

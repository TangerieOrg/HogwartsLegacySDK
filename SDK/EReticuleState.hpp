#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EReticuleState : uint8_t {
    RS_Unlocked = 0,
    RS_Locked = 1,
    RS_FinisherActive = 2,
    RS_FinisherFreeze = 3,
    RS_Fire = 4,
    RS_Idle = 5,
    RS_MAX = 6,
};
#pragma pack(pop)

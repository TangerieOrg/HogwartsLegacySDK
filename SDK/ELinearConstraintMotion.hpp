#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ELinearConstraintMotion : uint8_t {
    LCM_Free = 0,
    LCM_Limited = 1,
    LCM_Locked = 2,
    LCM_MAX = 3,
};
#pragma pack(pop)

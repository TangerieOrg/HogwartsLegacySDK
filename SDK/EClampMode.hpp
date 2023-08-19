#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EClampMode : uint8_t {
    CMODE_Clamp = 0,
    CMODE_ClampMin = 1,
    CMODE_ClampMax = 2,
    CMODE_MAX = 3,
};
#pragma pack(pop)

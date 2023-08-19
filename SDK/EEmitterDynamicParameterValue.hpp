#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EEmitterDynamicParameterValue : uint8_t {
    EDPV_UserSet = 0,
    EDPV_AutoSet = 1,
    EDPV_VelocityX = 2,
    EDPV_VelocityY = 3,
    EDPV_VelocityZ = 4,
    EDPV_VelocityMag = 5,
    EDPV_MAX = 6,
};
#pragma pack(pop)

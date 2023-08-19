#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EParticleCameraOffsetUpdateMethod : uint8_t {
    EPCOUM_DirectSet = 0,
    EPCOUM_Additive = 1,
    EPCOUM_Scalar = 2,
    EPCOUM_MAX = 3,
};
#pragma pack(pop)

#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELightClippingPlanesFilterType : uint8_t {
    None = 0,
    OnlyNonInverted = 1,
    OnlyInverted = 2,
    ELightClippingPlanesFilterType_MAX = 3,
};
#pragma pack(pop)

#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELightClippingVolumeFilterType : uint8_t {
    None = 0,
    OnlyInside = 1,
    OnlyOutside = 2,
    ELightClippingVolumeFilterType_MAX = 3,
};
#pragma pack(pop)

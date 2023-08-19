#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELightClippingProviderVolumeMode : uint8_t {
    Inside = 0,
    Outside = 1,
    ELightClippingProviderVolumeMode_MAX = 2,
};
#pragma pack(pop)

#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELightClippingProviderInsideVolumeMode : uint8_t {
    Inside = 0,
    Outside = 1,
    ELightClippingProviderInsideVolumeMode_MAX = 2,
};
#pragma pack(pop)

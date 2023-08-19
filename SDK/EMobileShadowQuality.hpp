#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMobileShadowQuality : uint8_t {
    NoFiltering = 0,
    PCF_1x1 = 1,
    PCF_2x2 = 2,
    PCF_3x3 = 3,
    EMobileShadowQuality_MAX = 4,
};
#pragma pack(pop)

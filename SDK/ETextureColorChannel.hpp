#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ETextureColorChannel : uint8_t {
    TCC_Red = 0,
    TCC_Green = 1,
    TCC_Blue = 2,
    TCC_Alpha = 3,
    TCC_MAX = 4,
};
#pragma pack(pop)

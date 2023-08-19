#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum TextureAddress : uint8_t {
    TA_Wrap = 0,
    TA_Clamp = 1,
    TA_Mirror = 2,
    TA_MAX = 3,
};
#pragma pack(pop)

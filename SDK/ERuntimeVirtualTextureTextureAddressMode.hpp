#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ERuntimeVirtualTextureTextureAddressMode : uint8_t {
    RVTTA_Clamp = 0,
    RVTTA_Wrap = 1,
    RVTTA_MAX = 2,
};
#pragma pack(pop)

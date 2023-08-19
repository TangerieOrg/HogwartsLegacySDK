#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ERuntimeVirtualTextureMipValueMode : uint8_t {
    RVTMVM_None = 0,
    RVTMVM_MipLevel = 1,
    RVTMVM_MipBias = 2,
    RVTMVM_MAX = 3,
};
#pragma pack(pop)

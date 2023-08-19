#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ETextureMipValueMode {
    TMVM_None = 0,
    TMVM_MipLevel = 1,
    TMVM_MipBias = 2,
    TMVM_Derivative = 3,
    TMVM_MAX = 4,
};
#pragma pack(pop)

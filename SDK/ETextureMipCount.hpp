#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ETextureMipCount {
    TMC_ResidentMips = 0,
    TMC_AllMips = 1,
    TMC_AllMipsBiased = 2,
    TMC_MAX = 3,
};
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FMovieAtlasData : public FTableRowBase {
    int32_t Index; // 0x8
    int32_t Width; // 0xc
    int32_t Height; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)

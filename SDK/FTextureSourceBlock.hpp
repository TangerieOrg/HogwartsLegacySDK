#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FTextureSourceBlock {
    int32_t BlockX; // 0x0
    int32_t BlockY; // 0x4
    int32_t SizeX; // 0x8
    int32_t SizeY; // 0xc
    int32_t NumSlices; // 0x10
    int32_t NumMips; // 0x14
}; // Size: 0x18
#pragma pack(pop)

#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum FoliageVertexColorMask : uint8_t {
    FOLIAGEVERTEXCOLORMASK_Disabled = 0,
    FOLIAGEVERTEXCOLORMASK_Red = 1,
    FOLIAGEVERTEXCOLORMASK_Green = 2,
    FOLIAGEVERTEXCOLORMASK_Blue = 3,
    FOLIAGEVERTEXCOLORMASK_Alpha = 4,
    FOLIAGEVERTEXCOLORMASK_MAX = 5,
};
#pragma pack(pop)

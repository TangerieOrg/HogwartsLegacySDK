#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAdaptorPolygon2Group {
    uint32_t RenderingSectionIndex; // 0x0
    int32_t MaterialIndex; // 0x4
    int32_t MaxTriangles; // 0x8
    char pad_c[0x3c];
}; // Size: 0x48
#pragma pack(pop)

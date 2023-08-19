#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FBuilderPoly {
    TArray<int32_t> VertexIndices; // 0x0
    int32_t Direction; // 0x10
    FName ItemName; // 0x14
    int32_t PolyFlags; // 0x1c
}; // Size: 0x20
#pragma pack(pop)

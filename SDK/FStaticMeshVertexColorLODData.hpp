#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FPaintedVertex.hpp"
#pragma pack(push, 1)
struct FStaticMeshVertexColorLODData {
    TArray<FPaintedVertex> PaintedVertices; // 0x0
    TArray<FColor> VertexBufferColors; // 0x10
    uint32_t LODIndex; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)

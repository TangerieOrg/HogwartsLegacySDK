#pragma once
#include <cstdint>
#include "FRenderableTriangleVertex.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
struct FRenderableTriangle {
    UMaterialInterface* Material; // 0x0
    FRenderableTriangleVertex Vertex0; // 0x8
    FRenderableTriangleVertex Vertex1; // 0x2c
    FRenderableTriangleVertex Vertex2; // 0x50
    char pad_74[0x4];
}; // Size: 0x78
#pragma pack(pop)

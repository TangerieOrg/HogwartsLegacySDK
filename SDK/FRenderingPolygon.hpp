#pragma once
#include <cstdint>
#include "FPolygonGroupID.hpp"
#include "FTriangleID.hpp"
#pragma pack(push, 1)
struct FRenderingPolygon {
    FPolygonGroupID PolygonGroupID; // 0x0
    char pad_4[0x4];
    TArray<FTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
}; // Size: 0x18
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FAdaptorTriangleID.hpp"
#include "FPolygonGroupID.hpp"
#pragma pack(push, 1)
struct FAdaptorPolygon {
    FPolygonGroupID PolygonGroupID; // 0x0
    char pad_4[0x4];
    TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
}; // Size: 0x18
#pragma pack(pop)

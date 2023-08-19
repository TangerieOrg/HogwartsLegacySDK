#pragma once
#include <cstdint>
#include "EPolygonEdgeHardness.hpp"
#include "FPolygonGroupID.hpp"
#include "FPolygonID.hpp"
#include "FVertexAndAttributes.hpp"
#pragma pack(push, 1)
struct FPolygonToCreate {
    FPolygonGroupID PolygonGroupID; // 0x0
    char pad_4[0x4];
    TArray<FVertexAndAttributes> PerimeterVertices; // 0x8
    FPolygonID OriginalPolygonID; // 0x18
    EPolygonEdgeHardness PolygonEdgeHardness; // 0x1c
    char pad_1d[0x3];
}; // Size: 0x20
#pragma pack(pop)

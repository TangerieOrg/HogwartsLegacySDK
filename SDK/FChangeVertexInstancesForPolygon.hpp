#pragma once
#include <cstdint>
#include "FPolygonID.hpp"
#include "FVertexIndexAndInstanceID.hpp"
#include "FVertexInstancesForPolygonHole.hpp"
#pragma pack(push, 1)
struct FChangeVertexInstancesForPolygon {
    FPolygonID PolygonID; // 0x0
    char pad_4[0x4];
    TArray<FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x8
    TArray<FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18
}; // Size: 0x28
#pragma pack(pop)

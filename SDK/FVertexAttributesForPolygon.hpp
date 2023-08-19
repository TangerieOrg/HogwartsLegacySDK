#pragma once
#include <cstdint>
#include "FMeshElementAttributeList.hpp"
#include "FPolygonID.hpp"
#include "FVertexAttributesForPolygonHole.hpp"
#pragma pack(push, 1)
struct FVertexAttributesForPolygon {
    FPolygonID PolygonID; // 0x0
    char pad_4[0x4];
    TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x8
    TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18
}; // Size: 0x28
#pragma pack(pop)

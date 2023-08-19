#pragma once
#include <cstdint>
#include "FMeshElementAttributeList.hpp"
#pragma pack(push, 1)
struct FVertexAttributesForPolygonHole {
    TArray<FMeshElementAttributeList> VertexAttributeList; // 0x0
}; // Size: 0x10
#pragma pack(pop)

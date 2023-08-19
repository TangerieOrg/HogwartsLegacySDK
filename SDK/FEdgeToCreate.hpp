#pragma once
#include <cstdint>
#include "FEdgeID.hpp"
#include "FMeshElementAttributeList.hpp"
#include "FVertexID.hpp"
#pragma pack(push, 1)
struct FEdgeToCreate {
    FVertexID VertexID0; // 0x0
    FVertexID VertexID1; // 0x4
    FMeshElementAttributeList EdgeAttributes; // 0x8
    FEdgeID OriginalEdgeID; // 0x18
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)

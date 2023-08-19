#pragma once
#include <cstdint>
#include "FMeshElementAttributeList.hpp"
#include "FVertexID.hpp"
#include "FVertexInstanceID.hpp"
#pragma pack(push, 1)
struct FVertexAndAttributes {
    FVertexInstanceID VertexInstanceID; // 0x0
    FVertexID VertexID; // 0x4
    FMeshElementAttributeList PolygonVertexAttributes; // 0x8
}; // Size: 0x18
#pragma pack(pop)

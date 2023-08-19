#pragma once
#include <cstdint>
#include "FMeshElementAttributeList.hpp"
#include "FVertexID.hpp"
#include "FVertexInstanceID.hpp"
#pragma pack(push, 1)
struct FVertexInstanceToCreate {
    FVertexID VertexID; // 0x0
    char pad_4[0x4];
    FMeshElementAttributeList VertexInstanceAttributes; // 0x8
    FVertexInstanceID OriginalVertexInstanceID; // 0x18
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)

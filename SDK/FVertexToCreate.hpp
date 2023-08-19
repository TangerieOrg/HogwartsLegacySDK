#pragma once
#include <cstdint>
#include "FMeshElementAttributeList.hpp"
#include "FVertexID.hpp"
#pragma pack(push, 1)
struct FVertexToCreate {
    FMeshElementAttributeList VertexAttributes; // 0x0
    FVertexID OriginalVertexID; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)

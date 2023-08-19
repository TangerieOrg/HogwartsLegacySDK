#pragma once
#include <cstdint>
#include "FMeshElementAttributeList.hpp"
#include "FVertexID.hpp"
#pragma pack(push, 1)
struct FAttributesForVertex {
    FVertexID VertexID; // 0x0
    char pad_4[0x4];
    FMeshElementAttributeList VertexAttributes; // 0x8
}; // Size: 0x18
#pragma pack(pop)

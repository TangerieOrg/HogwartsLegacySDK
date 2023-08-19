#pragma once
#include <cstdint>
#include "FMeshElementAttributeList.hpp"
#include "FVertexInstanceID.hpp"
#pragma pack(push, 1)
struct FAttributesForVertexInstance {
    FVertexInstanceID VertexInstanceID; // 0x0
    char pad_4[0x4];
    FMeshElementAttributeList VertexInstanceAttributes; // 0x8
}; // Size: 0x18
#pragma pack(pop)

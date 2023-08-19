#pragma once
#include <cstdint>
#include "FEdgeID.hpp"
#include "FMeshElementAttributeList.hpp"
#pragma pack(push, 1)
struct FAttributesForEdge {
    FEdgeID EdgeID; // 0x0
    char pad_4[0x4];
    FMeshElementAttributeList EdgeAttributes; // 0x8
}; // Size: 0x18
#pragma pack(pop)

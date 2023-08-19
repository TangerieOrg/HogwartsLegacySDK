#pragma once
#include <cstdint>
#include "FMeshElementAttributeList.hpp"
#include "FPolygonGroupID.hpp"
#pragma pack(push, 1)
struct FPolygonGroupToCreate {
    FMeshElementAttributeList PolygonGroupAttributes; // 0x0
    FPolygonGroupID OriginalPolygonGroupID; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)

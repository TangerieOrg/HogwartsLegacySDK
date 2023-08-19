#pragma once
#include <cstdint>
#include "FVertexIndexAndInstanceID.hpp"
#pragma pack(push, 1)
struct FVertexInstancesForPolygonHole {
    TArray<FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x0
}; // Size: 0x10
#pragma pack(pop)

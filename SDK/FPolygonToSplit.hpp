#pragma once
#include <cstdint>
#include "FPolygonID.hpp"
#include "FVertexPair.hpp"
#pragma pack(push, 1)
struct FPolygonToSplit {
    FPolygonID PolygonID; // 0x0
    char pad_4[0x4];
    TArray<FVertexPair> VertexPairsToSplitAt; // 0x8
}; // Size: 0x18
#pragma pack(pop)

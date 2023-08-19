#pragma once
#include <cstdint>
#include "FPolygonGroupID.hpp"
#include "FPolygonID.hpp"
#pragma pack(push, 1)
struct FPolygonGroupForPolygon {
    FPolygonID PolygonID; // 0x0
    FPolygonGroupID PolygonGroupID; // 0x4
}; // Size: 0x8
#pragma pack(pop)

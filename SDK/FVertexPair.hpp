#pragma once
#include <cstdint>
#include "FVertexID.hpp"
#pragma pack(push, 1)
struct FVertexPair {
    FVertexID VertexID0; // 0x0
    FVertexID VertexID1; // 0x4
}; // Size: 0x8
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "FVertexID.hpp"
#pragma pack(push, 1)
struct FVertexToMove {
    FVertexID VertexID; // 0x0
    FVector NewVertexPosition; // 0x4
}; // Size: 0x10
#pragma pack(pop)

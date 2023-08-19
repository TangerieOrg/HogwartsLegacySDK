#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FMeshTriCoordinate {
    int32_t Tri; // 0x0
    FVector BaryCoord; // 0x4
}; // Size: 0x10
#pragma pack(pop)

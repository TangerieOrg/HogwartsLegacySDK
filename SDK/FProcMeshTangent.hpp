#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FProcMeshTangent {
    FVector TangentX; // 0x0
    bool bFlipTangentY; // 0xc
    char pad_d[0x3];
}; // Size: 0x10
#pragma pack(pop)

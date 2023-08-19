#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FLinearizedSplinePoint {
    FVector Position; // 0x0
    float Distance; // 0xc
    float TangentOffset; // 0x10
}; // Size: 0x14
#pragma pack(pop)

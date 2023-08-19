#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "FVector.hpp"
#include "FVector4.hpp"
#pragma pack(push, 1)
struct FPaintedVertex {
    FVector Position; // 0x0
    FColor Color; // 0xc
    FVector4 Normal; // 0x10
}; // Size: 0x20
#pragma pack(pop)

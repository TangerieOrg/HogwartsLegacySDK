#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FDebugMapPoint {
    FLinearColor Color; // 0x0
    FVector Location; // 0x10
}; // Size: 0x1c
#pragma pack(pop)

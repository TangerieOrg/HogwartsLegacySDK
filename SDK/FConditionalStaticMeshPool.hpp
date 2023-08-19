#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FConditionalStaticMeshPool {
    FVector2D TimeRange; // 0x0
    TArray<void*> StaticMeshPool; // 0x8
}; // Size: 0x18
#pragma pack(pop)

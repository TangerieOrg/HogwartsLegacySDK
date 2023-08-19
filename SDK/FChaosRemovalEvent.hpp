#pragma once
#include <cstdint>
#include "FVector.hpp"
class UPrimitiveComponent;
#pragma pack(push, 1)
struct FChaosRemovalEvent {
    UPrimitiveComponent* Component; // 0x0
    FVector Location; // 0x8
    float Mass; // 0x14
}; // Size: 0x18
#pragma pack(pop)

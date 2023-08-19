#pragma once
#include <cstdint>
#include "FVector.hpp"
class UPrimitiveComponent;
#pragma pack(push, 1)
struct FChaosBreakEvent {
    UPrimitiveComponent* Component; // 0x0
    FVector Location; // 0x8
    FVector Velocity; // 0x14
    FVector AngularVelocity; // 0x20
    float Mass; // 0x2c
}; // Size: 0x30
#pragma pack(pop)

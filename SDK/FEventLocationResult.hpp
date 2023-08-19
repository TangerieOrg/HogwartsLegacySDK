#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FEventLocationResult {
    FVector Position; // 0x0
    float ZRotation; // 0xc
    FString LocationName; // 0x10
    FString Guid; // 0x20
}; // Size: 0x30
#pragma pack(pop)

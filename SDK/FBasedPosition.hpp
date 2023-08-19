#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
class AActor;
#pragma pack(push, 1)
struct FBasedPosition {
    AActor* Base; // 0x0
    FVector Position; // 0x8
    FVector CachedBaseLocation; // 0x14
    FRotator CachedBaseRotation; // 0x20
    FVector CachedTransPosition; // 0x2c
}; // Size: 0x38
#pragma pack(pop)

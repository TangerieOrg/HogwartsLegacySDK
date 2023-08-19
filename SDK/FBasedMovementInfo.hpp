#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector_NetQuantize100.hpp"
class UPrimitiveComponent;
#pragma pack(push, 1)
struct FBasedMovementInfo {
    UPrimitiveComponent* MovementBase; // 0x0
    FName BoneName; // 0x8
    FVector_NetQuantize100 Location; // 0x10
    FRotator Rotation; // 0x1c
    bool bServerHasBaseComponent; // 0x28
    bool bRelativeRotation; // 0x29
    bool bServerHasVelocity; // 0x2a
    char pad_2b[0x5];
}; // Size: 0x30
#pragma pack(pop)

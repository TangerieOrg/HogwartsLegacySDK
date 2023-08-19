#pragma once
#include <cstdint>
#include "APawn.hpp"
#include "FTransform.hpp"
struct FVector;
struct FRotator;
#pragma pack(push, 1)
class APlayerCart : public APawn {
public:
    char pad_2a8[0x8];
    FTransform DismountLocation; // 0x2b0
    FTransform CompanionDismountLocation; // 0x2e0
    static APlayerCart* StaticClass();
    void UpdateCartPositionAndRotation(FVector& InNewLocation, FRotator& InNewRotation, FVector& InVelocity);
}; // Size: 0x310
#pragma pack(pop)

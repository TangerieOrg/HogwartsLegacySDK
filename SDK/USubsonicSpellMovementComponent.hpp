#pragma once
#include <cstdint>
#include "UMunitionMovementComponent.hpp"
#pragma pack(push, 1)
class USubsonicSpellMovementComponent : public UMunitionMovementComponent {
public:
    float MinHomingDistance; // 0x1f0
    float MaxHomingDistance; // 0x1f4
    float MinHomingRotationSpeed; // 0x1f8
    float MaxHomingRotationSpeed; // 0x1fc
    char pad_200[0x10];
    static USubsonicSpellMovementComponent* StaticClass();
}; // Size: 0x210
#pragma pack(pop)

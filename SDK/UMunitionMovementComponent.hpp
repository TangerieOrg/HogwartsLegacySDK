#pragma once
#include <cstdint>
#include "UProjectileMovementComponent.hpp"
#pragma pack(push, 1)
class UMunitionMovementComponent : public UProjectileMovementComponent {
public:
    static UMunitionMovementComponent* StaticClass();
}; // Size: 0x1f0
#pragma pack(pop)

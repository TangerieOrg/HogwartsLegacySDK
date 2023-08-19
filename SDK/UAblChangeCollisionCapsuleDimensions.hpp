#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblChangeCollisionCapsuleDimensions : public UAblAbilityTask {
public:
    float CollisionCapsuleHalfHeight; // 0x70
    float CollisionCapsuleRadius; // 0x74
    static UAblChangeCollisionCapsuleDimensions* StaticClass();
}; // Size: 0x78
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "AShadowSprint.hpp"
class UShadowSprintMovementComponent;
class UCapsuleComponent;
#pragma pack(push, 1)
class ABP_ShadowSprint_C : public AShadowSprint {
public:
    UShadowSprintMovementComponent* ShadowSprintMovement; // 0x260
    UCapsuleComponent* Capsule; // 0x268
    static ABP_ShadowSprint_C* StaticClass();
}; // Size: 0x270
#pragma pack(pop)

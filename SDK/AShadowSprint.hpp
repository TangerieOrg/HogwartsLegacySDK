#pragma once
#include <cstdint>
#include "AActor.hpp"
class UCapsuleComponent;
class UShadowSprintMovementComponent;
#pragma pack(push, 1)
class AShadowSprint : public AActor {
public:
    float ActiveScale; // 0x248
    bool bScaleIn; // 0x24c
    char pad_24d[0x3];
    UCapsuleComponent* CapsuleComponent; // 0x250
    UShadowSprintMovementComponent* MovementComponent; // 0x258
    static AShadowSprint* StaticClass();
    void SetScaleInfo(bool bInScaleIn, float InActiveScale);
    UCapsuleComponent* GetCapsuleComponent();
}; // Size: 0x260
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "UCharacterMovementComponent.hpp"
class URootMotionModifier;
class AActor;
class URootMotionModifierProperties;
#pragma pack(push, 1)
class UAble_MovementComponent : public UCharacterMovementComponent {
public:
    TArray<URootMotionModifier*> RootMotionModifierArray; // 0xb30
    static UAble_MovementComponent* StaticClass();
    void RemoveRootMotionModifier(URootMotionModifierProperties* InRootMotionModifierProperties);
    URootMotionModifier* AddRootMotionModifier(URootMotionModifierProperties* InRootMotionModifierProperties, AActor* Instigator, float Duration);
}; // Size: 0xb40
#pragma pack(pop)

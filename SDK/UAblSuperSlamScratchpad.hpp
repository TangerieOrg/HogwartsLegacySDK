#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class APhysicsConstraintActor;
class USkeletalMeshComponent;
class URagdollControlComponent;
#pragma pack(push, 1)
class UAblSuperSlamScratchpad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0xe8];
    APhysicsConstraintActor* PhysicsConstraintActor; // 0x110
    USkeletalMeshComponent* SkeletalMeshComp; // 0x118
    URagdollControlComponent* RagdollControlComp; // 0x120
    char pad_128[0x8];
    static UAblSuperSlamScratchpad* StaticClass();
}; // Size: 0x130
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class USkeletalMeshComponent;
class UAblSuperSlamScratchpad;
#pragma pack(push, 1)
class UAblSuperSlamForceHelperScratchpad : public UAblAbilityTaskScratchPad {
public:
    USkeletalMeshComponent* SkeletalMeshComp; // 0x28
    UAblSuperSlamScratchpad* SuperSlamScratchpad; // 0x30
    static UAblSuperSlamForceHelperScratchpad* StaticClass();
}; // Size: 0x38
#pragma pack(pop)

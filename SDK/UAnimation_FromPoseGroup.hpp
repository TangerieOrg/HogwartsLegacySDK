#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UAnimationProvider.hpp"
class UPoseGroupProvider;
class UAnimationArchitectTagProvider;
#pragma pack(push, 1)
class UAnimation_FromPoseGroup : public UAnimationProvider {
public:
    char pad_28[0x8];
    bool TransitionFromPreviousPose; // 0x30
    char pad_31[0x7];
    UPoseGroupProvider* TransitionFromPoseGroupOverride; // 0x38
    FGameplayTagContainer Tags; // 0x40
    TArray<UAnimationArchitectTagProvider*> TagProviders; // 0x60
    static UAnimation_FromPoseGroup* StaticClass();
}; // Size: 0x70
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UObject.hpp"
class UAnimationAsset;
#pragma pack(push, 1)
class UAblAnimationTagChooser : public UObject {
public:
    TArray<UAnimationAsset*> AnimationAssets; // 0x28
    TArray<FGameplayTagContainer> AnimationTags; // 0x38
    bool bAppendAnimationTags; // 0x48
    char pad_49[0x7];
    static UAblAnimationTagChooser* StaticClass();
}; // Size: 0x50
#pragma pack(pop)

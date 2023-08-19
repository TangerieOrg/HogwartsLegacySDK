#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UObject.hpp"
class UAnimationAsset;
#pragma pack(push, 1)
class UAblAnimationAssetChooser : public UObject {
public:
    TArray<UAnimationAsset*> AnimationAssets; // 0x28
    TArray<FGameplayTagContainer> AnimationTags; // 0x38
    static UAblAnimationAssetChooser* StaticClass();
}; // Size: 0x48
#pragma pack(pop)

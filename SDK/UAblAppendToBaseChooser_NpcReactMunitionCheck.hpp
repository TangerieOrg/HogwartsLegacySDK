#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UAblAnimationTagChooser_AppendToBaseChooser.hpp"
class UInteractionArchitectAsset;
#pragma pack(push, 1)
class UAblAppendToBaseChooser_NpcReactMunitionCheck : public UAblAnimationTagChooser_AppendToBaseChooser {
public:
    TArray<UInteractionArchitectAsset*> MunitionAssetsToFind; // 0x28
    FGameplayTagContainer MunitionTagsToFind; // 0x38
    FGameplayTagContainer AnimationTagsToAppend; // 0x58
    static UAblAppendToBaseChooser_NpcReactMunitionCheck* StaticClass();
}; // Size: 0x78
#pragma pack(pop)

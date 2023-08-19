#pragma once
#include <cstdint>
#include "ArchitectType.hpp"
#include "FGameplayTagContainer.hpp"
#include "UActorComponent.hpp"
class UAnimationArchitectAsset;
struct FGameplayTag;
class UStationArchitectAsset;
class UAnimationArchitectTagProvider;
class UObjectArchitectAsset;
#pragma pack(push, 1)
class UAnimationArchitectComponent : public UActorComponent {
public:
    char pad_c8[0x28];
    ArchitectType AssetType; // 0xf0
    char pad_f1[0x7];
    TArray<UAnimationArchitectAsset*> HardAnimationArchitectAssets; // 0xf8
    UAnimationArchitectAsset* TempAnimationArchitectAsset; // 0x108
    TArray<UStationArchitectAsset*> HardStationArchitectAssets; // 0x110
    TArray<UStationArchitectAsset*> HardStationArchitectSceneRigAssets; // 0x120
    TArray<UObjectArchitectAsset*> HardObjectArchitectAssets; // 0x130
    char pad_140[0x50];
    FGameplayTagContainer AnimationArchitectGameplayTags; // 0x190
    FGameplayTagContainer AnimationArchitectPersistentGamePlayTags; // 0x1b0
    TArray<UAnimationArchitectTagProvider*> AnimationTagProviders; // 0x1d0
    FGameplayTagContainer InteractionArchitectGameplayTags; // 0x1e0
    FGameplayTagContainer InteractionArchitectPersistentGamePlayTags; // 0x200
    FGameplayTagContainer StationArchitectGamePlayTags; // 0x220
    FGameplayTagContainer StationArchitectSceneRigTags; // 0x240
    FGameplayTagContainer ObjectArchitectGamePlayTags; // 0x260
    FGameplayTagContainer AnimationArchitectAssetTagContainer; // 0x280
    FGameplayTagContainer InteractionReactionAssetTagContainer; // 0x2a0
    TArray<UAnimationArchitectAsset*> DynamicAnimationArchitectAssets; // 0x2c0
    char pad_2d0[0x88];
    static UAnimationArchitectComponent* StaticClass();
    void RemoveObjectArchitectGameplayTag(FGameplayTag& InGameplayTag);
    void RemoveInteractionArchitectGameplayTag(FGameplayTag& InGameplayTag);
    void RemoveAnimationArchitectGameplayTag(FGameplayTag& InGameplayTag);
    bool InteractionArchitectTagContainerHasTag(FGameplayTag& InGameplayTag);
    bool InteractionArchitectTagContainerHasAny(FGameplayTagContainer& InGameplayTagContainer);
    void AddObjectArchitectGameplayTag(FGameplayTag& InGameplayTag);
    void AddInteractionArchitectPersistentGameplayTags(FGameplayTagContainer& InGameplayTags);
    void AddInteractionArchitectGameplayTag(FGameplayTag& InGameplayTag);
    void AddAnimationArchitectPersistentGameplayTags(FGameplayTagContainer& InGameplayTags);
    void AddAnimationArchitectGameplayTag(FGameplayTag& InGameplayTag);
}; // Size: 0x358
#pragma pack(pop)

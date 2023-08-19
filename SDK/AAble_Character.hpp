#pragma once
#include <cstdint>
#include "AAnimationArchitect_Character.hpp"
#include "EInteractionProject.hpp"
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
class UAblAbilityComponent;
class UClass;
class URagdollControlComponent;
class AActor;
class UAblPhysicalBodyManager;
class UAblAbilityContext;
class UInteractionArchitectAsset;
#pragma pack(push, 1)
class AAble_Character : public AAnimationArchitect_Character {
public:
    char pad_4f0[0x8];
    FGameplayTag GameplayHierarchyTag; // 0x4f8
    UAblAbilityComponent* AblAbilityComponent; // 0x500
    URagdollControlComponent* RagdollControlComponent; // 0x508
    char pad_510[0x18];
    UAblPhysicalBodyManager* PhysicalBodyManager; // 0x528
    char pad_530[0x10];
    static AAble_Character* StaticClass();
    bool PlayAbilityByClass(FName InAbilityChannelName, UClass* InAblAbilitClass, AActor* InInstigator);
    bool GetAbilityWithMultipleAssetsAndTags(FGameplayTagContainer& InSourceTagContainer, TArray<UInteractionArchitectAsset*>& InArchitectAssets, TArray<FGameplayTagContainer>& InArchitectTags, EInteractionProject Project, bool& bOutIsAdditive, UClass*& OutAbilityClass);
    bool GetAbilityWithMultipleAssets(FGameplayTagContainer& InSourceTagContainer, TArray<UInteractionArchitectAsset*>& InArchitectAssets, FGameplayTagContainer& InArchitectTagContainer, EInteractionProject Project, bool& bOutIsAdditive, UClass*& OutAbilityClass);
    bool GetAbilityFromInteractionArchitect(FGameplayTagContainer& InSourceTagContainer, UInteractionArchitectAsset* InArchitectAsset, FGameplayTagContainer& InArchitectTagContainer, EInteractionProject Project, bool& bOutIsAdditive, UClass*& OutAbilityClass);
    bool ExecuteAbilityOnChannelByClass(FName ChannelName, UClass* InAblAbilitClass, AActor* InInstigator);
    bool ExecuteAbilityByClass(UClass* InAblAbilitClass, AActor* InInstigator);
    void CancelAbilityByContext(UAblAbilityContext* InAblAbilityContext);
    void CancelAbilityByChannel(FName InAbilityChannelName);
}; // Size: 0x540
#pragma pack(pop)

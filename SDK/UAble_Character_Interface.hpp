#pragma once
#include <cstdint>
#include "EInteractionProject.hpp"
#include "FGameplayTagContainer.hpp"
#include "UInterface.hpp"
class UClass;
class AActor;
class UAblAbilityContext;
class UInteractionArchitectAsset;
#pragma pack(push, 1)
class UAble_Character_Interface : public UInterface {
public:
    static UAble_Character_Interface* StaticClass();
    bool PlayAbilityByClass(FName InAbilityChannelName, UClass* InAblAbilitClass, AActor* InInstigator);
    bool GetAbilityWithMultipleAssetsAndTags(FGameplayTagContainer& InSourceTagContainer, TArray<UInteractionArchitectAsset*>& InArchitectAssets, TArray<FGameplayTagContainer>& InArchitectTags, EInteractionProject Project, bool& bOutIsAdditive, UClass*& OutAbilityClass);
    bool GetAbilityWithMultipleAssets(FGameplayTagContainer& InSourceTagContainer, TArray<UInteractionArchitectAsset*>& InArchitectAssets, FGameplayTagContainer& InArchitectTagContainer, EInteractionProject Project, bool& bOutIsAdditive, UClass*& OutAbilityClass);
    bool GetAbilityFromInteractionArchitect(FGameplayTagContainer& InSourceTagContainer, UInteractionArchitectAsset* InArchitectAsset, FGameplayTagContainer& InArchitectTagContainer, EInteractionProject Project, bool& bOutIsAdditive, UClass*& OutAbilityClass);
    bool ExecuteAbilityOnChannelByClass(FName ChannelName, UClass* InAblAbilitClass, AActor* InInstigator);
    bool ExecuteAbilityByClass(UClass* InAblAbilitClass, AActor* InInstigator);
    void CancelAbilityByContext(UAblAbilityContext* InAblAbilityContext);
    void CancelAbilityByChannel(FName InAbilityChannelName);
}; // Size: 0x28
#pragma pack(pop)

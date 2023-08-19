#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "FInteractionArchitectAsset_Connection.hpp"
#include "UBaseArchitectAsset.hpp"
class UClass;
#pragma pack(push, 1)
class UInteractionArchitectAsset : public UBaseArchitectAsset {
public:
    TArray<FInteractionArchitectAsset_Connection> ConnectionArray; // 0xd0
    static UInteractionArchitectAsset* StaticClass();
    TArray<UClass*> K2_FindAbilityConnectionArray(FGameplayTagContainer& InSourceTagContainer, TArray<UInteractionArchitectAsset*>& InTargetAssets, TArray<FGameplayTagContainer>& InTargetTags);
}; // Size: 0xe0
#pragma pack(pop)

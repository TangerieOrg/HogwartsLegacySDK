#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UActorComponent.hpp"
class UAnimationArchitectTagProvider;
class UObject;
struct FGameplayTag;
#pragma pack(push, 1)
class UBaseArchitectComponent : public UActorComponent {
public:
    char pad_c8[0x38];
    TArray<void*> HardBaseArchitectAssets; // 0x100
    char pad_110[0x8];
    TArray<UAnimationArchitectTagProvider*> AnimationTagProviders; // 0x118
    FGameplayTagContainer BaseArchitectGamePlayTags; // 0x128
    char pad_148[0x48];
    TArray<UObject*> RequestedLoadedAssets; // 0x190
    static UBaseArchitectComponent* StaticClass();
    void RemoveGameplayTag(FGameplayTag& InGameplayTag);
    bool GameplayTagContainerHasTag(FGameplayTag& InGameplayTag);
    void AddGameplayTag(FGameplayTag& InGameplayTag);
}; // Size: 0x1a0
#pragma pack(pop)

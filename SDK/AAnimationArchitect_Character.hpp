#pragma once
#include <cstdint>
#include "ACharacter.hpp"
class UAnimationArchitectComponent;
struct FGameplayTagContainer;
struct FGameplayTag;
class UObject;
#pragma pack(push, 1)
class AAnimationArchitect_Character : public ACharacter {
public:
    char pad_4e0[0x8];
    UAnimationArchitectComponent* AnimationArchitectComponent; // 0x4e8
    static AAnimationArchitect_Character* StaticClass();
    UAnimationArchitectComponent* GetAnimationArchitectComponent();
    bool FindArchitectAssets(FGameplayTagContainer& InAnimTagContainer, TArray<UObject*>& Assets);
    void FindArchitectAssetFromMonolythicAsset(FGameplayTagContainer& InAssetTypeTagContainer, FGameplayTagContainer& InTagContainer, UObject*& OutAsset, bool bForceFirstOnly);
    void FindArchitectAsset(FGameplayTagContainer& InAnimTagContainer, UObject*& OutAsset, bool bForceFirstOnly);
    void AddInteractionArchitectGameplayTag(FGameplayTag& InGamepayTag);
    void AddAnimationArchitectGameplayTag(FGameplayTag& InGameplayTag);
}; // Size: 0x4f0
#pragma pack(pop)

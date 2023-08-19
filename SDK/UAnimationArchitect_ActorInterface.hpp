#pragma once
#include <cstdint>
#include "UInterface.hpp"
class UAnimationArchitectComponent;
struct FGameplayTagContainer;
struct FGameplayTag;
class UAnimationArchitectAsset;
class UObject;
#pragma pack(push, 1)
class UAnimationArchitect_ActorInterface : public UInterface {
public:
    static UAnimationArchitect_ActorInterface* StaticClass();
    UAnimationArchitectComponent* GetAnimationArchitectComponent();
    void FindSceneRigAsset(FGameplayTagContainer& InAnimTagContainer, UObject*& OutSceneRig);
    bool FindArchitectAssets(FGameplayTagContainer& InTagContainer, TArray<UObject*>& Assets);
    void FindArchitectAssetFromMonolythicAsset(FGameplayTagContainer& InAssetTypeTagContainer, FGameplayTagContainer& InTagContainer, UObject*& OutAsset, bool bForceFirstOnly);
    void FindArchitectAsset(FGameplayTagContainer& InAnimTagContainer, UObject*& OutAsset, bool bForceFirstOnly);
    void AddAnimationArchitectGamplayTag(FGameplayTag& InGameplayTag);
    void AddAnimationArchitectAsset(UAnimationArchitectAsset* InArchitectAsset);
}; // Size: 0x28
#pragma pack(pop)

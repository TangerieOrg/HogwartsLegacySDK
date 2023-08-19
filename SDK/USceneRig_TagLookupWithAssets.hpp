#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "USceneRigProvider.hpp"
class UBaseArchitectAsset;
class UAnimationArchitectTagProvider;
#pragma pack(push, 1)
class USceneRig_TagLookupWithAssets : public USceneRigProvider {
public:
    char pad_28[0x8];
    UBaseArchitectAsset* LookupAsset; // 0x30
    FGameplayTagContainer Tags; // 0x38
    TArray<UAnimationArchitectTagProvider*> TagProviders; // 0x58
    static USceneRig_TagLookupWithAssets* StaticClass();
}; // Size: 0x68
#pragma pack(pop)

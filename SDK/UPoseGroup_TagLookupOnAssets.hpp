#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UPoseGroupProvider.hpp"
class UAnimationArchitectTagProvider;
class UBaseArchitectFilter;
#pragma pack(push, 1)
class UPoseGroup_TagLookupOnAssets : public UPoseGroupProvider {
public:
    char pad_28[0x8];
    FGameplayTagContainer Tags; // 0x30
    TArray<UAnimationArchitectTagProvider*> TagProviders; // 0x50
    UBaseArchitectFilter* Filter; // 0x60
    static UPoseGroup_TagLookupOnAssets* StaticClass();
}; // Size: 0x68
#pragma pack(pop)

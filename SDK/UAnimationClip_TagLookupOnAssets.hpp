#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UAnimationClipProvider.hpp"
class UAnimationArchitectTagProvider;
class UBaseArchitectFilter;
#pragma pack(push, 1)
class UAnimationClip_TagLookupOnAssets : public UAnimationClipProvider {
public:
    char pad_28[0x8];
    FGameplayTagContainer Tags; // 0x30
    TArray<UAnimationArchitectTagProvider*> TagProviders; // 0x50
    UBaseArchitectFilter* Filter; // 0x60
    static UAnimationClip_TagLookupOnAssets* StaticClass();
}; // Size: 0x68
#pragma pack(pop)

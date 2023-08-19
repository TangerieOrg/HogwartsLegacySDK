#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UAnimationProvider.hpp"
class UActorProvider;
class UAnimationArchitectTagProvider;
#pragma pack(push, 1)
class UAnimationAsset_TagLookup : public UAnimationProvider {
public:
    UActorProvider* LookupOnActor; // 0x28
    FGameplayTagContainer Tags; // 0x30
    TArray<UAnimationArchitectTagProvider*> TagProviders; // 0x50
    static UAnimationAsset_TagLookup* StaticClass();
}; // Size: 0x60
#pragma pack(pop)

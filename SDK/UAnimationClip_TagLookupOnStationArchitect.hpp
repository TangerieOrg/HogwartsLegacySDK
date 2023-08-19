#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UAnimationClipProvider.hpp"
class UActorProvider;
class UAnimationArchitectTagProvider;
class UBaseArchitectFilter;
#pragma pack(push, 1)
class UAnimationClip_TagLookupOnStationArchitect : public UAnimationClipProvider {
public:
    char pad_28[0x8];
    UActorProvider* LookupOnActor; // 0x30
    FGameplayTagContainer Tags; // 0x38
    TArray<UAnimationArchitectTagProvider*> TagProviders; // 0x58
    UBaseArchitectFilter* Filter; // 0x68
    static UAnimationClip_TagLookupOnStationArchitect* StaticClass();
}; // Size: 0x70
#pragma pack(pop)

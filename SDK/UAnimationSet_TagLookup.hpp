#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UAnimationSetProvider.hpp"
class UActorProvider;
class UAnimationArchitectTagProvider;
class UBaseArchitectFilter;
#pragma pack(push, 1)
class UAnimationSet_TagLookup : public UAnimationSetProvider {
public:
    char pad_28[0x8];
    UActorProvider* LookupOnActor; // 0x30
    FGameplayTagContainer Tags; // 0x38
    TArray<UAnimationArchitectTagProvider*> TagProviders; // 0x58
    UBaseArchitectFilter* Filter; // 0x68
    char pad_70[0x8];
    static UAnimationSet_TagLookup* StaticClass();
}; // Size: 0x78
#pragma pack(pop)

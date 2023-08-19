#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UObjectProvider.hpp"
class UAnimationArchitectTagProvider;
#pragma pack(push, 1)
class UObject_StationStoryContent : public UObjectProvider {
public:
    char pad_28[0x8];
    FGameplayTagContainer Tags; // 0x30
    TArray<UAnimationArchitectTagProvider*> TagProviders; // 0x50
    static UObject_StationStoryContent* StaticClass();
}; // Size: 0x60
#pragma pack(pop)

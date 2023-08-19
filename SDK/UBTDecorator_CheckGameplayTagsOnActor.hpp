#pragma once
#include <cstdint>
#include "EGameplayContainerMatchType.hpp"
#include "FBlackboardKeySelector.hpp"
#include "FGameplayTagContainer.hpp"
#include "UBTDecorator.hpp"
#pragma pack(push, 1)
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator {
public:
    FBlackboardKeySelector ActorToCheck; // 0x68
    EGameplayContainerMatchType TagsToMatch; // 0x90
    char pad_91[0x7];
    FGameplayTagContainer GameplayTags; // 0x98
    FString CachedDescription; // 0xb8
    static UBTDecorator_CheckGameplayTagsOnActor* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)

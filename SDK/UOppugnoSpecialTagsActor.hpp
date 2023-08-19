#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "UInterface.hpp"
#pragma pack(push, 1)
class UOppugnoSpecialTagsActor : public UInterface {
public:
    static UOppugnoSpecialTagsActor* StaticClass();
    FGameplayTagContainer GetSpecialTags();
    void AddSpecialTag(FGameplayTag GameplayTag);
}; // Size: 0x28
#pragma pack(pop)

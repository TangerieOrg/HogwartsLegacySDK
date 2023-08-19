#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "TagsChangedEvent.hpp"
#include "UAblAbilityChannelingScratchPad.hpp"
class AActor;
#pragma pack(push, 1)
class UAblChannelingObjectArchitectScratchPad : public UAblAbilityChannelingScratchPad {
public:
    char pad_28[0x20];
    static UAblChannelingObjectArchitectScratchPad* StaticClass();
    void TagsChanged(AActor* Actor, FGameplayTag GameplayTag, TagsChangedEvent TagsChanged);
}; // Size: 0x48
#pragma pack(pop)

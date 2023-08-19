#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UAblAnimationTagChooser_AppendToBaseChooser.hpp"
#pragma pack(push, 1)
class UAblAppendToBaseChooser_FlipFlop : public UAblAnimationTagChooser_AppendToBaseChooser {
public:
    FGameplayTagContainer FirstTags; // 0x28
    FGameplayTagContainer SecondTags; // 0x48
    static UAblAppendToBaseChooser_FlipFlop* StaticClass();
}; // Size: 0x68
#pragma pack(pop)

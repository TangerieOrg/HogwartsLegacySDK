#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UAblAnimationTagChooser.hpp"
class UAblAnimationTagChooser_AppendToBaseChooser;
#pragma pack(push, 1)
class UAblAnimationTagChooser_AppendToBase : public UAblAnimationTagChooser {
public:
    FGameplayTagContainer BaseAnimationTag; // 0x50
    TArray<UAblAnimationTagChooser_AppendToBaseChooser*> Choosers; // 0x70
    static UAblAnimationTagChooser_AppendToBase* StaticClass();
}; // Size: 0x80
#pragma pack(pop)

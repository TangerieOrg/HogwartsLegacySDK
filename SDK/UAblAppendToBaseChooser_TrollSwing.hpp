#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "UAblAnimationTagChooser_AppendToBaseChooser.hpp"
#pragma pack(push, 1)
class UAblAppendToBaseChooser_TrollSwing : public UAblAnimationTagChooser_AppendToBaseChooser {
public:
    FGameplayTag ForehandTag; // 0x28
    FGameplayTag BackhandTag; // 0x30
    FGameplayTag SplitTag; // 0x38
    FGameplayTag FromRunTag; // 0x40
    FGameplayTag StepBackTag; // 0x48
    float StepBackDistance; // 0x50
    char pad_54[0x4];
    static UAblAppendToBaseChooser_TrollSwing* StaticClass();
}; // Size: 0x58
#pragma pack(pop)

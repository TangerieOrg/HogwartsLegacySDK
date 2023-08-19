#pragma once
#include <cstdint>
#include "UDialogueScriptCommand.hpp"
#pragma pack(push, 1)
class UDialogueScriptEndTimeDelayCommand : public UDialogueScriptCommand {
public:
    float DelayValue; // 0x30
    char pad_34[0x4];
    static UDialogueScriptEndTimeDelayCommand* StaticClass();
}; // Size: 0x38
#pragma pack(pop)

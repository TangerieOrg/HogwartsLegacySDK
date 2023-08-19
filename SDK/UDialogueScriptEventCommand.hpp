#pragma once
#include <cstdint>
#include "UDialogueScriptCommand.hpp"
#pragma pack(push, 1)
class UDialogueScriptEventCommand : public UDialogueScriptCommand {
public:
    float LineFraction; // 0x30
    char pad_34[0x4];
    static UDialogueScriptEventCommand* StaticClass();
}; // Size: 0x38
#pragma pack(pop)

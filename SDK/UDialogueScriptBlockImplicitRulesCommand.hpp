#pragma once
#include <cstdint>
#include "UDialogueScriptCommand.hpp"
#pragma pack(push, 1)
class UDialogueScriptBlockImplicitRulesCommand : public UDialogueScriptCommand {
public:
    bool BlockLayeredAnimation; // 0x30
    bool BlockCameraChanges; // 0x31
    char pad_32[0x6];
    static UDialogueScriptBlockImplicitRulesCommand* StaticClass();
}; // Size: 0x38
#pragma pack(pop)

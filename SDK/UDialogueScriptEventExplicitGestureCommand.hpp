#pragma once
#include <cstdint>
#include "ECommandForType.hpp"
#include "UDialogueScriptEventCommand.hpp"
class UNameProvider;
#pragma pack(push, 1)
class UDialogueScriptEventExplicitGestureCommand : public UDialogueScriptEventCommand {
public:
    UNameProvider* Gesture; // 0x38
    ECommandForType For; // 0x40
    char pad_41[0x7];
    static UDialogueScriptEventExplicitGestureCommand* StaticClass();
}; // Size: 0x48
#pragma pack(pop)

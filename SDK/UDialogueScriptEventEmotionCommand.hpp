#pragma once
#include <cstdint>
#include "ECommandForType.hpp"
#include "EFacialEmotion.hpp"
#include "UDialogueScriptEventCommand.hpp"
#pragma pack(push, 1)
class UDialogueScriptEventEmotionCommand : public UDialogueScriptEventCommand {
public:
    EFacialEmotion Emotion; // 0x38
    ECommandForType For; // 0x39
    bool ForFacial; // 0x3a
    bool ForFullBody; // 0x3b
    float BlendInTime; // 0x3c
    bool UseBeforeSpeaking; // 0x40
    bool UseAfterSpeaking; // 0x41
    char pad_42[0x2];
    float PostLineActiveTime; // 0x44
    bool OverrideHoldTime; // 0x48
    char pad_49[0x3];
    float HoldTime; // 0x4c
    static UDialogueScriptEventEmotionCommand* StaticClass();
}; // Size: 0x50
#pragma pack(pop)

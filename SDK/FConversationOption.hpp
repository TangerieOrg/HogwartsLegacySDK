#pragma once
#include <cstdint>
#include "EAvaAudioDialogueConditionFailedLineHandling.hpp"
#pragma pack(push, 1)
struct FConversationOption {
    FString Text_ID; // 0x0
    FString Icon_ID; // 0x10
    int32_t MenuNode_ID; // 0x20
    bool Disabled; // 0x24
    EAvaAudioDialogueConditionFailedLineHandling Reason_Tooltip; // 0x25
    char pad_26[0x2];
    FName ReasonName; // 0x28
    bool PreviouslyUsed; // 0x30
    char pad_31[0x7];
    FString Conversation_ID; // 0x38
}; // Size: 0x48
#pragma pack(pop)

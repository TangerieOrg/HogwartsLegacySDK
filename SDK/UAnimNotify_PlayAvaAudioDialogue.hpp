#pragma once
#include <cstdint>
#include "FDialogueConversationReference.hpp"
#include "UAnimNotify.hpp"
class UAvaAudioDialogueEvent;
#pragma pack(push, 1)
class UAnimNotify_PlayAvaAudioDialogue : public UAnimNotify {
public:
    FDialogueConversationReference DialogueEventReference; // 0x38
    UAvaAudioDialogueEvent* DialogueEvent; // 0x48
    FString DialogueEventName; // 0x50
    static UAnimNotify_PlayAvaAudioDialogue* StaticClass();
}; // Size: 0x60
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FDialogueConversationReference.hpp"
#include "UAnimNotify.hpp"
#pragma pack(push, 1)
class UAnimNotify_RiderDialogue : public UAnimNotify {
public:
    TArray<FDialogueConversationReference> DialogueEventReferences; // 0x38
    char pad_48[0x50];
    static UAnimNotify_RiderDialogue* StaticClass();
}; // Size: 0x98
#pragma pack(pop)

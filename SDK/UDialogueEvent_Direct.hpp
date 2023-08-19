#pragma once
#include <cstdint>
#include "FDialogueConversationReference.hpp"
#include "UDialogueEventProvider.hpp"
#pragma pack(push, 1)
class UDialogueEvent_Direct : public UDialogueEventProvider {
public:
    FDialogueConversationReference DialogueEvent; // 0x28
    static UDialogueEvent_Direct* StaticClass();
}; // Size: 0x38
#pragma pack(pop)

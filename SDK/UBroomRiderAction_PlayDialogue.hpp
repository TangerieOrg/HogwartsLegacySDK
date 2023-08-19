#pragma once
#include <cstdint>
#include "FDialogueConversationReference.hpp"
#include "UBroomRiderSubActionBase.hpp"
#pragma pack(push, 1)
class UBroomRiderAction_PlayDialogue : public UBroomRiderSubActionBase {
public:
    FDialogueConversationReference DialogueEvent; // 0x38
    bool bWaitForDialogueToComplete; // 0x48
    char pad_49[0x17];
    static UBroomRiderAction_PlayDialogue* StaticClass();
    void OnDialogueComplete();
}; // Size: 0x60
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "AMirroredFocusTrigger.hpp"
#include "FDialogueConversationReference.hpp"
#pragma pack(push, 1)
class AFatLadyMirroredFocusTrigger : public AMirroredFocusTrigger {
public:
    FDialogueConversationReference CalloutEventNight; // 0x518
    FDialogueConversationReference CalloutEventGryffindor; // 0x528
    FDialogueConversationReference CalloutEventNonGryffindor; // 0x538
    static AFatLadyMirroredFocusTrigger* StaticClass();
}; // Size: 0x548
#pragma pack(pop)

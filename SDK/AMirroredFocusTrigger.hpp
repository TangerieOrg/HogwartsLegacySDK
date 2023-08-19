#pragma once
#include <cstdint>
#include "AFocusTrigger.hpp"
#include "FDialogueConversationReference.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
class AMirroredFocusTrigger : public AFocusTrigger {
public:
    float MirroredFocusProbablity; // 0x498
    float MirroredCalloutProbablity; // 0x49c
    float MirroredPlayerFocusProbablity; // 0x4a0
    float MirroredPlayerCalloutProbablity; // 0x4a4
    FDialogueConversationReference CalloutEvent; // 0x4a8
    bool bUseCalloutOffset; // 0x4b8
    char pad_4b9[0x3];
    FVector CalloutOffset; // 0x4bc
    char pad_4c8[0x50];
    static AMirroredFocusTrigger* StaticClass();
}; // Size: 0x518
#pragma pack(pop)

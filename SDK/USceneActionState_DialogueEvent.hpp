#pragma once
#include <cstdint>
#include "FDialogueConversationReference.hpp"
#include "USceneRigObjectActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_DialogueEvent : public USceneRigObjectActionState {
public:
    char pad_70[0x8];
    FDialogueConversationReference Event; // 0x78
    int32_t AudioHandle; // 0x88
    char pad_8c[0x4];
    static USceneActionState_DialogueEvent* StaticClass();
}; // Size: 0x90
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FDialogueConversationReference.hpp"
#include "USceneRigObjectActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_DialogueBucket : public USceneRigObjectActionState {
public:
    TArray<FDialogueConversationReference> EventBucket; // 0x70
    int32_t AudioHandle; // 0x80
    char pad_84[0x4];
    bool bHasValidEnter; // 0x88
    char pad_89[0xf];
    static USceneActionState_DialogueBucket* StaticClass();
}; // Size: 0x98
#pragma pack(pop)

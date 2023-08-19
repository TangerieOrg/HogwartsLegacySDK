#pragma once
#include <cstdint>
#include "UDialogueLineRuleState.hpp"
class USceneAction_Camera;
class UStoryGraph_Conversation;
#pragma pack(push, 1)
class UDialogueLineRuleState_PickCamera : public UDialogueLineRuleState {
public:
    USceneAction_Camera* LastCameraAction; // 0x58
    UStoryGraph_Conversation* CurrentConversation; // 0x60
    static UDialogueLineRuleState_PickCamera* StaticClass();
}; // Size: 0x68
#pragma pack(pop)

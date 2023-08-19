#pragma once
#include <cstdint>
#include "EPlayForcedConversation_ConversationInitializationTime.hpp"
#include "FTimeRigOutputSymbol.hpp"
#include "USceneRigObjectActionBase.hpp"
class UStoryGraph_Conversation;
#pragma pack(push, 1)
class USceneAction_PlayForcedConversation : public USceneRigObjectActionBase {
public:
    FName CharacterID; // 0xa0
    UStoryGraph_Conversation* ConversationGraph; // 0xa8
    FTimeRigOutputSymbol ConversationStart; // 0xb0
    FTimeRigOutputSymbol ConversationEnd; // 0xc8
    EPlayForcedConversation_ConversationInitializationTime ConversationInitializationTime; // 0xe0
    char pad_e1[0x7];
    static USceneAction_PlayForcedConversation* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)

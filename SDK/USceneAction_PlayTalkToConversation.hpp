#pragma once
#include <cstdint>
#include "FTimeRigOutputSymbol.hpp"
#include "USceneRigObjectActionBase.hpp"
class UStoryGraph_Conversation;
#pragma pack(push, 1)
class USceneAction_PlayTalkToConversation : public USceneRigObjectActionBase {
public:
    FName CharacterID; // 0xa0
    UStoryGraph_Conversation* ConversationGraph; // 0xa8
    FTimeRigOutputSymbol ConversationStart; // 0xb0
    FTimeRigOutputSymbol ConversationEnd; // 0xc8
    static USceneAction_PlayTalkToConversation* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)

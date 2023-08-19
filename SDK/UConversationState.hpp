#pragma once
#include <cstdint>
#include "UObject.hpp"
class AStoryGraphActor;
class AConversationActor;
class UStoryGraph_Conversation;
#pragma pack(push, 1)
class UConversationState : public UObject {
public:
    char pad_28[0x2b8];
    AStoryGraphActor* LegacyConversationActor; // 0x2e0
    AConversationActor* OwnedConversationActor; // 0x2e8
    UStoryGraph_Conversation* CurrentConversation; // 0x2f0
    char pad_2f8[0x328];
    static UConversationState* StaticClass();
}; // Size: 0x620
#pragma pack(pop)

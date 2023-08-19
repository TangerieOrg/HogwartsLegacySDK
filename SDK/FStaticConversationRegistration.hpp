#pragma once
#include <cstdint>
#include "EConversationType.hpp"
#include "FDialogueConversationReference.hpp"
class UStoryGraph_Conversation;
#pragma pack(push, 1)
struct FStaticConversationRegistration {
    EConversationType ConversationType; // 0x0
    char pad_1[0x7];
    FDialogueConversationReference ArticyConversation; // 0x8
    UStoryGraph_Conversation* StoryGraph; // 0x18
    bool EnsureVendorConversationWhenGreetingPlayed; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)

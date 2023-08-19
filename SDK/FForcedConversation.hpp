#pragma once
#include <cstdint>
class AActor;
#pragma pack(push, 1)
struct FForcedConversation {
    AActor* Initiator; // 0x0
    FName ConversationID; // 0x8
}; // Size: 0x10
#pragma pack(pop)

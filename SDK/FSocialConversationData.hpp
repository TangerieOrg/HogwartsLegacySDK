#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSocialConversationData {
    FName ConversationLine; // 0x0
    FName ConversationType; // 0x8
    FName DisplayStatus; // 0x10
}; // Size: 0x18
#pragma pack(pop)

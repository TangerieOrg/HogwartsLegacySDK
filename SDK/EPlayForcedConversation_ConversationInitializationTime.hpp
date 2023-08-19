#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPlayForcedConversation_ConversationInitializationTime : uint8_t {
    WhenCreatingState = 0,
    WhenEnteringAction = 1,
    EPlayForcedConversation_MAX = 2,
};
#pragma pack(pop)

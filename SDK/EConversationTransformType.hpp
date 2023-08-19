#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EConversationTransformType : uint8_t {
    Initial = 0,
    InitialAvatarRoot = 1,
    FinalInteractionActorRoot = 2,
    Final = 3,
    EConversationTransformType_MAX = 4,
};
#pragma pack(pop)

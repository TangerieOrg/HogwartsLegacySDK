#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPhysicalReactionTaskAction : uint8_t {
    StartImpactReaction = 0,
    StartReaction = 1,
    HoverStart = 2,
    HoverEnd = 3,
    NoAction = 4,
    EPhysicalReactionTaskAction_MAX = 5,
};
#pragma pack(pop)

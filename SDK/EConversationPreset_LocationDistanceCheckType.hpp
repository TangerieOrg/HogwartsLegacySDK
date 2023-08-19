#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EConversationPreset_LocationDistanceCheckType {
    CheckAll = 0,
    IdealOnly = 1,
    NearOnly = 2,
    TooCloseOnly = 3,
    EConversationPreset_MAX = 4,
};
#pragma pack(pop)

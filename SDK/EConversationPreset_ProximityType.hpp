#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EConversationPreset_ProximityType : int8_t {
    Ideal = 0,
    Near = 1,
    TooClose = 2,
    EConversationPreset_MAX = 3,
};
#pragma pack(pop)

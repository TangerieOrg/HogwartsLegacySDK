#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFlockPersonalityAxis : uint8_t {
    FPA_PITCH = 0,
    FPA_YAW = 1,
    FPA_ROLL = 2,
    FPA_PITCHORYAW = 3,
    FPA_PITCHORROLL = 4,
    FPA_YAWORROLL = 5,
    FPA_RANDOM = 6,
    FPA_MAX = 7,
};
#pragma pack(pop)

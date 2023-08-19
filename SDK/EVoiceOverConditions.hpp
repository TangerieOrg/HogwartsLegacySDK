#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EVoiceOverConditions : uint8_t {
    Default = 0,
    ForcePlaying = 1,
    EVoiceOverConditions_MAX = 2,
};
#pragma pack(pop)

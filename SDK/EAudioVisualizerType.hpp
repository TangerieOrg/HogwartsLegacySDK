#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAudioVisualizerType : uint8_t {
    Footsteps = 0,
    Spells = 1,
    Dialogue = 2,
    EAudioVisualizerType_MAX = 3,
};
#pragma pack(pop)

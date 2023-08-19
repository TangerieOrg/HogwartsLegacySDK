#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESynth1PatchSource : uint8_t {
    LFO1 = 0,
    LFO2 = 1,
    Envelope = 2,
    BiasEnvelope = 3,
    Count = 4,
    ESynth1PatchSource_MAX = 5,
};
#pragma pack(pop)

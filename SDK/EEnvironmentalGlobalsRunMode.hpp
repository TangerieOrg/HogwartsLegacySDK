#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnvironmentalGlobalsRunMode : uint8_t {
    GameAndProbeCapture = 0,
    GameOnly = 1,
    ProbeCaptureOnly = 2,
    EEnvironmentalGlobalsRunMode_MAX = 3,
};
#pragma pack(pop)

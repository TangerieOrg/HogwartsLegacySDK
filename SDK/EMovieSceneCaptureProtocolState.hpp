#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMovieSceneCaptureProtocolState : uint8_t {
    Idle = 0,
    Initialized = 1,
    Capturing = 2,
    Finalizing = 3,
    EMovieSceneCaptureProtocolState_MAX = 4,
};
#pragma pack(pop)

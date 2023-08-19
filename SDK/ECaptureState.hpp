#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECaptureState : uint8_t {
    None = 0,
    PreStart = 1,
    Progressing = 2,
    Succeeding = 3,
    Succeeded = 4,
    Cancelling = 5,
    Cancelled = 6,
    Interrupted = 7,
    Failing = 8,
    ECaptureState_MAX = 9,
};
#pragma pack(pop)

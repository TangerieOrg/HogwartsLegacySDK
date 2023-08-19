#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class AkActionOnEventType : uint8_t {
    Stop = 0,
    Pause = 1,
    Resume = 2,
    Break = 3,
    ReleaseEnvelope = 4,
    AkActionOnEventType_MAX = 5,
};
#pragma pack(pop)

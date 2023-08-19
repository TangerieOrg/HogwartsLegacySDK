#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESequenceTimeUnit : uint8_t {
    DisplayRate = 0,
    TickResolution = 1,
    ESequenceTimeUnit_MAX = 2,
};
#pragma pack(pop)

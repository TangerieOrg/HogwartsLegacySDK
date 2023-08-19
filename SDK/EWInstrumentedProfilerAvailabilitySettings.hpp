#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWInstrumentedProfilerAvailabilitySettings : uint32_t {
    NotSelected = 0,
    Disabled = 1,
    Minimal = 2,
    Standard = 3,
    Detailed = 4,
    Debug = 5,
    EWInstrumentedProfilerAvailabilitySettings_MAX = 6,
};
#pragma pack(pop)

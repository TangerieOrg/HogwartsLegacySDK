#pragma once
#include <cstdint>
#include "EWInstrumentedProfilerAvailabilitySettings.hpp"
#include "EWInstrumentedProfilerCategorySettings.hpp"
#pragma pack(push, 1)
struct FWInstrumentedProfilerCategoryAvailability {
    EWInstrumentedProfilerCategorySettings Category; // 0x0
    EWInstrumentedProfilerAvailabilitySettings Availability; // 0x4
}; // Size: 0x8
#pragma pack(pop)

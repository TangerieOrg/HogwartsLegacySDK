#pragma once
#include <cstdint>
#include "FEphemerisDayInfo.hpp"
#include "FLightProbeCaptureTimeInterval.hpp"
#pragma pack(push, 1)
struct FLightProbeCaptureSetupComputer {
    FEphemerisDayInfo DayInfo; // 0x0
    TArray<FLightProbeCaptureTimeInterval> CaptureTimeIntervals; // 0x78
}; // Size: 0x88
#pragma pack(pop)

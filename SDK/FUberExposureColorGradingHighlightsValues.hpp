#pragma once
#include <cstdint>
#include "FUberExposureColorGradingValues.hpp"
#pragma pack(push, 1)
struct FUberExposureColorGradingHighlightsValues : public FUberExposureColorGradingValues {
    FString HighlightsMinValue; // 0x50
}; // Size: 0x60
#pragma pack(pop)

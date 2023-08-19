#pragma once
#include <cstdint>
#include "FUberExposureColorGradingValues.hpp"
#pragma pack(push, 1)
struct FUberExposureColorGradingShadowsValues : public FUberExposureColorGradingValues {
    FString ShadowsMaxValue; // 0x50
}; // Size: 0x60
#pragma pack(pop)

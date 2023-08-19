#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELightAdapatationProperty : uint8_t {
    BaseEV = 0,
    OutdoorsDayTimeEVBoost = 1,
    AdaptationStrengthPercent = 2,
    MinMaxExposureTarget = 3,
    MaxEV = 4,
    MinEV = 5,
    StartCutoffMaxEV = 6,
    StartCutoffMinEV = 7,
    ELightAdapatationProperty_MAX = 8,
};
#pragma pack(pop)

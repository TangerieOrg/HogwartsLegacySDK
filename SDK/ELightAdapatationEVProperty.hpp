#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELightAdapatationEVProperty : uint8_t {
    BaseEV = 0,
    OutdoorsDayTimeEVBoost = 1,
    MaxEV = 2,
    MinEV = 3,
    StartCutoffMaxEV = 4,
    StartCutoffMinEV = 5,
    ELightAdapatationEVProperty_MAX = 6,
};
#pragma pack(pop)

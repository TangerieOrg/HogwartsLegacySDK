#pragma once
#include <cstdint>
#include "FProbeLightingAdjustmentParameters.hpp"
#include "UProbeLightingParams.hpp"
#pragma pack(push, 1)
class UProbeLightingParamsAdjustments : public UProbeLightingParams {
public:
    FProbeLightingAdjustmentParameters Parameters; // 0x28
    static UProbeLightingParamsAdjustments* StaticClass();
}; // Size: 0x38
#pragma pack(pop)

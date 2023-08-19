#pragma once
#include <cstdint>
#include "FProbeLightingAdjustmentParametersOverride.hpp"
#include "UProbeLightingParams.hpp"
#pragma pack(push, 1)
class UProbeLightingParamsAdjustmentsOverride : public UProbeLightingParams {
public:
    FProbeLightingAdjustmentParametersOverride Parameters; // 0x28
    char pad_3c[0x4];
    static UProbeLightingParamsAdjustmentsOverride* StaticClass();
}; // Size: 0x40
#pragma pack(pop)

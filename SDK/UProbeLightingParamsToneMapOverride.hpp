#pragma once
#include <cstdint>
#include "FProbeLightingToneMapParametersOverride.hpp"
#include "UProbeLightingParams.hpp"
#pragma pack(push, 1)
class UProbeLightingParamsToneMapOverride : public UProbeLightingParams {
public:
    FProbeLightingToneMapParametersOverride Parameters; // 0x28
    static UProbeLightingParamsToneMapOverride* StaticClass();
}; // Size: 0x38
#pragma pack(pop)

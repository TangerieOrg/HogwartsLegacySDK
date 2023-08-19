#pragma once
#include <cstdint>
#include "FProbeContactShadowsParametersOverride.hpp"
#include "UProbeLightingParams.hpp"
#pragma pack(push, 1)
class UProbeLightingParamsContactShadowsOverride : public UProbeLightingParams {
public:
    FProbeContactShadowsParametersOverride Parameters; // 0x28
    static UProbeLightingParamsContactShadowsOverride* StaticClass();
}; // Size: 0x40
#pragma pack(pop)

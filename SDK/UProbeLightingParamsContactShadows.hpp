#pragma once
#include <cstdint>
#include "FProbeContactShadowsParameters.hpp"
#include "UProbeLightingParams.hpp"
#pragma pack(push, 1)
class UProbeLightingParamsContactShadows : public UProbeLightingParams {
public:
    FProbeContactShadowsParameters Parameters; // 0x28
    char pad_3c[0x4];
    static UProbeLightingParamsContactShadows* StaticClass();
}; // Size: 0x40
#pragma pack(pop)

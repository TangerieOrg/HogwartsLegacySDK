#pragma once
#include <cstdint>
#include "FProbeLightingParametersOverride.hpp"
#include "UProbeLightingParams.hpp"
#pragma pack(push, 1)
class UProbeLightingParamsOverride : public UProbeLightingParams {
public:
    FProbeLightingParametersOverride Parameters; // 0x28
    char pad_64[0x4];
    static UProbeLightingParamsOverride* StaticClass();
}; // Size: 0x68
#pragma pack(pop)

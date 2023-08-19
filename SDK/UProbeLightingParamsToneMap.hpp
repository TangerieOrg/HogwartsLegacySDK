#pragma once
#include <cstdint>
#include "FProbeLightingToneMapParameters.hpp"
#include "UProbeLightingParams.hpp"
#pragma pack(push, 1)
class UProbeLightingParamsToneMap : public UProbeLightingParams {
public:
    FProbeLightingToneMapParameters Parameters; // 0x28
    char pad_34[0x4];
    static UProbeLightingParamsToneMap* StaticClass();
}; // Size: 0x38
#pragma pack(pop)

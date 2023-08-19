#pragma once
#include <cstdint>
#include "FExpHeightFogParametersOverride.hpp"
#include "UExpHeightFogParams.hpp"
#pragma pack(push, 1)
class UExpHeightFogParamsOverrideFull : public UExpHeightFogParams {
public:
    FExpHeightFogParametersOverride Parameters; // 0x30
    static UExpHeightFogParamsOverrideFull* StaticClass();
}; // Size: 0x228
#pragma pack(pop)

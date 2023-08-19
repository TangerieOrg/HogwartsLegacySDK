#pragma once
#include <cstdint>
#include "FExpHeightFogSecondParametersOverride.hpp"
#include "UExpHeightFogParams.hpp"
#pragma pack(push, 1)
class UExpHeightFogParamsOverrideSecond : public UExpHeightFogParams {
public:
    FExpHeightFogSecondParametersOverride Second; // 0x30
    static UExpHeightFogParamsOverrideSecond* StaticClass();
}; // Size: 0x40
#pragma pack(pop)

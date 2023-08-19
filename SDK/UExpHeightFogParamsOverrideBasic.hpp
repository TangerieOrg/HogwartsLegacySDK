#pragma once
#include <cstdint>
#include "FExpHeightFogBasicParametersOverride.hpp"
#include "UExpHeightFogParams.hpp"
#pragma pack(push, 1)
class UExpHeightFogParamsOverrideBasic : public UExpHeightFogParams {
public:
    FExpHeightFogBasicParametersOverride Basic; // 0x30
    char pad_6c[0x4];
    static UExpHeightFogParamsOverrideBasic* StaticClass();
}; // Size: 0x70
#pragma pack(pop)

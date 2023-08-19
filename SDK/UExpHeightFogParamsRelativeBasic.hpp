#pragma once
#include <cstdint>
#include "FExpHeightFogBasicParametersRelative.hpp"
#include "UExpHeightFogParams.hpp"
#pragma pack(push, 1)
class UExpHeightFogParamsRelativeBasic : public UExpHeightFogParams {
public:
    FExpHeightFogBasicParametersRelative Basic; // 0x30
    char pad_184[0x4];
    static UExpHeightFogParamsRelativeBasic* StaticClass();
}; // Size: 0x188
#pragma pack(pop)

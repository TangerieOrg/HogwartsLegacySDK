#pragma once
#include <cstdint>
#include "FExpHeightFogSecondParametersRelative.hpp"
#include "UExpHeightFogParams.hpp"
#pragma pack(push, 1)
class UExpHeightFogParamsRelativeSecond : public UExpHeightFogParams {
public:
    FExpHeightFogSecondParametersRelative Second; // 0x30
    static UExpHeightFogParamsRelativeSecond* StaticClass();
}; // Size: 0x90
#pragma pack(pop)

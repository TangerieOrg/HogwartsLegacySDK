#pragma once
#include <cstdint>
#include "FExpHeightFogSecondParameters.hpp"
#include "UExpHeightFogParams.hpp"
#pragma pack(push, 1)
class UExpHeightFogParamsSecond : public UExpHeightFogParams {
public:
    FExpHeightFogSecondParameters Second; // 0x30
    char pad_3c[0x4];
    static UExpHeightFogParamsSecond* StaticClass();
}; // Size: 0x40
#pragma pack(pop)

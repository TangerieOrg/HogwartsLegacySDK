#pragma once
#include <cstdint>
#include "FExpHeightFogBasicParameters.hpp"
#include "UExpHeightFogParams.hpp"
#pragma pack(push, 1)
class UExpHeightFogParamsBasic : public UExpHeightFogParams {
public:
    FExpHeightFogBasicParameters Basic; // 0x30
    char pad_6c[0x4];
    static UExpHeightFogParamsBasic* StaticClass();
}; // Size: 0x70
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FExpHeightFogParametersRelative.hpp"
#include "UExpHeightFogParams.hpp"
#pragma pack(push, 1)
class UExpHeightFogParamsRelativeFull : public UExpHeightFogParams {
public:
    FExpHeightFogParametersRelative Parameters; // 0x30
    char pad_814[0x4];
    static UExpHeightFogParamsRelativeFull* StaticClass();
}; // Size: 0x818
#pragma pack(pop)

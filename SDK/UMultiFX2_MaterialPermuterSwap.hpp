#pragma once
#include <cstdint>
#include "FMaterialSwapParameters.hpp"
#include "UMultiFX2_Filtered.hpp"
class UMultiFX2_MaterialPermuterSwapInfoBase;
#pragma pack(push, 1)
class UMultiFX2_MaterialPermuterSwap : public UMultiFX2_Filtered {
public:
    UMultiFX2_MaterialPermuterSwapInfoBase* SwapInfo; // 0x68
    FMaterialSwapParameters Parameters; // 0x70
    static UMultiFX2_MaterialPermuterSwap* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)

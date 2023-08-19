#pragma once
#include <cstdint>
#include "FMaterialSwapKeyUI.hpp"
#include "UMultiFX2_MaterialPermuterSwapInfoBase.hpp"
#pragma pack(push, 1)
class UMultiFX2_MaterialPermuterSwapInfoKey : public UMultiFX2_MaterialPermuterSwapInfoBase {
public:
    FMaterialSwapKeyUI SwapInfo; // 0x28
    static UMultiFX2_MaterialPermuterSwapInfoKey* StaticClass();
}; // Size: 0x138
#pragma pack(pop)

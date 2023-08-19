#pragma once
#include <cstdint>
#include "FMaterialSwapInfoInPlaceMIDs.hpp"
#include "UMultiFX2_MaterialPermuterSwapInfoBase.hpp"
#pragma pack(push, 1)
class UMultiFX2_MaterialPermuterSwapInfoInPlaceMIDs : public UMultiFX2_MaterialPermuterSwapInfoBase {
public:
    FMaterialSwapInfoInPlaceMIDs SwapInfo; // 0x28
    static UMultiFX2_MaterialPermuterSwapInfoInPlaceMIDs* StaticClass();
}; // Size: 0x128
#pragma pack(pop)

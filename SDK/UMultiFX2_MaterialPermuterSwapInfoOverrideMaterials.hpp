#pragma once
#include <cstdint>
#include "FMaterialSwapInfoOverrideMaterials.hpp"
#include "UMultiFX2_MaterialPermuterSwapInfoBase.hpp"
#pragma pack(push, 1)
class UMultiFX2_MaterialPermuterSwapInfoOverrideMaterials : public UMultiFX2_MaterialPermuterSwapInfoBase {
public:
    FMaterialSwapInfoOverrideMaterials SwapInfo; // 0x28
    static UMultiFX2_MaterialPermuterSwapInfoOverrideMaterials* StaticClass();
}; // Size: 0x140
#pragma pack(pop)

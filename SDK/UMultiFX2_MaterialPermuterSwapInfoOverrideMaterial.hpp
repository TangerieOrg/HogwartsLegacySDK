#pragma once
#include <cstdint>
#include "FMaterialSwapInfoOverrideMaterial.hpp"
#include "UMultiFX2_MaterialPermuterSwapInfoBase.hpp"
#pragma pack(push, 1)
class UMultiFX2_MaterialPermuterSwapInfoOverrideMaterial : public UMultiFX2_MaterialPermuterSwapInfoBase {
public:
    FMaterialSwapInfoOverrideMaterial SwapInfo; // 0x28
    static UMultiFX2_MaterialPermuterSwapInfoOverrideMaterial* StaticClass();
}; // Size: 0x138
#pragma pack(pop)

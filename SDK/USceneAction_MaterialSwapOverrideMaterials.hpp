#pragma once
#include <cstdint>
#include "FMaterialSwapInfoOverrideMaterials.hpp"
#include "FMaterialSwapParameters.hpp"
#include "USceneAction_MaterialSwap.hpp"
#pragma pack(push, 1)
class USceneAction_MaterialSwapOverrideMaterials : public USceneAction_MaterialSwap {
public:
    FMaterialSwapInfoOverrideMaterials Swap; // 0xd8
    FMaterialSwapParameters InitialParameters; // 0x1f0
    static USceneAction_MaterialSwapOverrideMaterials* StaticClass();
}; // Size: 0x240
#pragma pack(pop)

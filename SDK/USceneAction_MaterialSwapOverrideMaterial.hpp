#pragma once
#include <cstdint>
#include "FMaterialSwapInfoOverrideMaterial.hpp"
#include "FMaterialSwapParameters.hpp"
#include "USceneAction_MaterialSwap.hpp"
#pragma pack(push, 1)
class USceneAction_MaterialSwapOverrideMaterial : public USceneAction_MaterialSwap {
public:
    FMaterialSwapInfoOverrideMaterial Swap; // 0xd8
    FMaterialSwapParameters InitialParameters; // 0x1e8
    static USceneAction_MaterialSwapOverrideMaterial* StaticClass();
}; // Size: 0x238
#pragma pack(pop)

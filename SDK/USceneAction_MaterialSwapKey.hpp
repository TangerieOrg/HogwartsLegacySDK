#pragma once
#include <cstdint>
#include "FMaterialSwapKeyBundlePreload.hpp"
#include "FMaterialSwapKeyUI.hpp"
#include "FMaterialSwapParameters.hpp"
#include "USceneAction_MaterialSwap.hpp"
#pragma pack(push, 1)
class USceneAction_MaterialSwapKey : public USceneAction_MaterialSwap {
public:
    FMaterialSwapKeyUI Swap; // 0xd8
    FMaterialSwapKeyBundlePreload PreloadMaterials; // 0x1e8
    char pad_1eb[0x5];
    FMaterialSwapParameters InitialParameters; // 0x1f0
    static USceneAction_MaterialSwapKey* StaticClass();
}; // Size: 0x240
#pragma pack(pop)

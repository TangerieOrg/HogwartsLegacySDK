#pragma once
#include <cstdint>
#include "FMaterialSwapKeyBundlePreload.hpp"
#include "FMaterialSwapParameters.hpp"
#include "USceneAction_MaterialSwap.hpp"
class UMaterialSwapInfoObject;
#pragma pack(push, 1)
class USceneAction_MaterialSwapFlex : public USceneAction_MaterialSwap {
public:
    UMaterialSwapInfoObject* Swap; // 0xd8
    FMaterialSwapKeyBundlePreload PreloadMaterials; // 0xe0
    char pad_e3[0x5];
    FMaterialSwapParameters InitialParameters; // 0xe8
    static USceneAction_MaterialSwapFlex* StaticClass();
}; // Size: 0x138
#pragma pack(pop)

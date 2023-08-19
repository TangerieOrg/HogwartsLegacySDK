#pragma once
#include <cstdint>
#include "FMaterialSwapInfoInPlaceMIDs.hpp"
#include "FMaterialSwapParameters.hpp"
#include "USceneAction_MaterialSwap.hpp"
#pragma pack(push, 1)
class USceneAction_MaterialSwapMIDs : public USceneAction_MaterialSwap {
public:
    FMaterialSwapInfoInPlaceMIDs Swap; // 0xd8
    FMaterialSwapParameters InitialParameters; // 0x1d8
    static USceneAction_MaterialSwapMIDs* StaticClass();
}; // Size: 0x228
#pragma pack(pop)

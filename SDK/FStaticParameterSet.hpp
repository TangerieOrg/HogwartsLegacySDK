#pragma once
#include <cstdint>
#include "FStaticComponentMaskParameter.hpp"
#include "FStaticMaterialLayersParameter.hpp"
#include "FStaticSwitchParameter.hpp"
#include "FStaticTerrainLayerWeightParameter.hpp"
#pragma pack(push, 1)
struct FStaticParameterSet {
    TArray<FStaticSwitchParameter> StaticSwitchParameters; // 0x0
    TArray<FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10
    TArray<FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20
    TArray<FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30
}; // Size: 0x40
#pragma pack(pop)

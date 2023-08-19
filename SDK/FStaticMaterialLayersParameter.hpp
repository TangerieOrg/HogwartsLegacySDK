#pragma once
#include <cstdint>
#include "FMaterialLayersFunctions.hpp"
#include "FStaticParameterBase.hpp"
#pragma pack(push, 1)
struct FStaticMaterialLayersParameter : public FStaticParameterBase {
    char pad_24[0x4];
    FMaterialLayersFunctions Value; // 0x28
}; // Size: 0x68
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FMaterialSwapScalarParameter.hpp"
#include "FMaterialSwapTextureParameter.hpp"
#include "FMaterialSwapVectorParameter.hpp"
#pragma pack(push, 1)
struct FMaterialSwapParametersSimple {
    TArray<FMaterialSwapScalarParameter> Scalars; // 0x0
    TArray<FMaterialSwapVectorParameter> Vectors; // 0x10
    TArray<FMaterialSwapTextureParameter> Textures; // 0x20
}; // Size: 0x30
#pragma pack(pop)

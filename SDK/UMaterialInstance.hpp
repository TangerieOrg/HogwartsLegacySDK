#pragma once
#include <cstdint>
#include "FFontParameterValue.hpp"
#include "FMaterialCachedParameters.hpp"
#include "FMaterialInstanceBasePropertyOverrides.hpp"
#include "FMaterialOverrideScalabitySettings.hpp"
#include "FRuntimeVirtualTextureParameterValue.hpp"
#include "FScalarParameterValue.hpp"
#include "FStaticParameterSet.hpp"
#include "FTextureParameterValue.hpp"
#include "FVectorParameterValue.hpp"
#include "UMaterialInterface.hpp"
class UPhysicalMaterial;
class UObject;
#pragma pack(push, 1)
class UMaterialInstance : public UMaterialInterface {
public:
    UPhysicalMaterial* PhysMaterial; // 0x98
    UPhysicalMaterial* PhysicalMaterialMap[8]; // 0xa0
    UMaterialInterface* Parent; // 0xe0
    char pad_e8[0x8];
    bool bOverrideParentForQL; // 0xf0
    char pad_f1[0x7];
    TArray<FMaterialOverrideScalabitySettings> QualityLevelOverrideMats; // 0xf8
    uint8_t bHasStaticPermutationResource : 1; // 0x108
    uint8_t bOverrideSubsurfaceProfile : 1; // 0x108
    uint8_t pad_bitfield_108_2 : 6;
    char pad_109[0x7];
    TArray<FScalarParameterValue> ScalarParameterValues; // 0x110
    TArray<FVectorParameterValue> VectorParameterValues; // 0x120
    TArray<FTextureParameterValue> TextureParameterValues; // 0x130
    TArray<FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues; // 0x140
    TArray<FFontParameterValue> FontParameterValues; // 0x150
    FMaterialInstanceBasePropertyOverrides BasePropertyOverrides; // 0x160
    char pad_168[0x10];
    FStaticParameterSet StaticParameters; // 0x178
    FMaterialCachedParameters CachedLayerParameters; // 0x1b8
    TArray<UObject*> CachedReferencedTextures; // 0x308
    char pad_318[0x118];
    static UMaterialInstance* StaticClass();
}; // Size: 0x430
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FPixelStarRenderingParameters.hpp"
#include "FStarRenderingParameters.hpp"
#include "FStarScalabilityParameters.hpp"
#include "UNiagaraDataInterface.hpp"
class UStarCatalog;
#pragma pack(push, 1)
class UNiagaraDataInterfaceHYGStarCatalog : public UNiagaraDataInterface {
public:
    UStarCatalog* StarCatalogAsset; // 0x38
    FStarRenderingParameters RenderingParams; // 0x40
    FPixelStarRenderingParameters PixelRenderingParams; // 0x54
    FStarScalabilityParameters ScalabilityParams; // 0x6c
    bool bStarSpawnValuesGPUBufferDirty; // 0x84
    char pad_85[0x3];
    static UNiagaraDataInterfaceHYGStarCatalog* StaticClass();
}; // Size: 0x88
#pragma pack(pop)

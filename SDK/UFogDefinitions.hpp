#pragma once
#include <cstdint>
#include "FExpHeightFogParameters.hpp"
#include "UDataAsset.hpp"
class UFogParams;
class UMaterialParameterCollection;
class UNiagaraParameterCollection;
#pragma pack(push, 1)
class UFogDefinitions : public UDataAsset {
public:
    TArray<UFogParams*> Definitions; // 0x30
    FExpHeightFogParameters BaseFog; // 0x40
    UMaterialParameterCollection* SurfaceFogMaterialParameterCollection; // 0x218
    UNiagaraParameterCollection* SurfaceFogNiagaraParameterCollection; // 0x220
    static UFogDefinitions* StaticClass();
}; // Size: 0x228
#pragma pack(pop)

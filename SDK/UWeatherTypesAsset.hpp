#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UMaterialParameterCollection;
class UNiagaraParameterCollection;
#pragma pack(push, 1)
class UWeatherTypesAsset : public UDataAsset {
public:
    UMaterialParameterCollection* MaterialParameterCollection; // 0x30
    UNiagaraParameterCollection* NiagaraParameterCollection; // 0x38
    static UWeatherTypesAsset* StaticClass();
}; // Size: 0x40
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "UWeatherDecalSettingsParameters.hpp"
class UMaterialParameterCollection;
class UNiagaraParameterCollection;
#pragma pack(push, 1)
class UWeatherDecalSettingsFlexParameters : public UWeatherDecalSettingsParameters {
public:
    int32_t Types; // 0x118
    char pad_11c[0x4];
    UMaterialParameterCollection* MaterialParameterCollection; // 0x120
    UNiagaraParameterCollection* NiagaraParameterCollection; // 0x128
    static UWeatherDecalSettingsFlexParameters* StaticClass();
}; // Size: 0x130
#pragma pack(pop)

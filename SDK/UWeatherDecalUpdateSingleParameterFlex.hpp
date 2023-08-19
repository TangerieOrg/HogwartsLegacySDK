#pragma once
#include <cstdint>
#include "UWeatherDecalUpdateSingleParameter.hpp"
class UMaterialParameterCollection;
class UNiagaraParameterCollection;
#pragma pack(push, 1)
class UWeatherDecalUpdateSingleParameterFlex : public UWeatherDecalUpdateSingleParameter {
public:
    int32_t Types; // 0x30
    char pad_34[0x4];
    UMaterialParameterCollection* MaterialParameterCollection; // 0x38
    UNiagaraParameterCollection* NiagaraParameterCollection; // 0x40
    static UWeatherDecalUpdateSingleParameterFlex* StaticClass();
}; // Size: 0x48
#pragma pack(pop)

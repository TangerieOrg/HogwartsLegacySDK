#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UWindParams;
class UMaterialParameterCollection;
class UNiagaraParameterCollection;
#pragma pack(push, 1)
class UWindDefinitions : public UDataAsset {
public:
    TArray<UWindParams*> Definitions; // 0x30
    UMaterialParameterCollection* MaterialParameterCollection; // 0x40
    UNiagaraParameterCollection* NiagaraParameterCollection; // 0x48
    float NormalizedWindSpeedMetersPerSecond; // 0x50
    char pad_54[0x4];
    static UWindDefinitions* StaticClass();
}; // Size: 0x58
#pragma pack(pop)

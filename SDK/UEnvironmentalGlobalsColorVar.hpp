#pragma once
#include <cstdint>
#include "FEnvironmentalGlobalsColorRunMode.hpp"
#include "UEnvironmentalGlobalsVar.hpp"
#pragma pack(push, 1)
class UEnvironmentalGlobalsColorVar : public UEnvironmentalGlobalsVar {
public:
    FName ParameterName; // 0x28
    FEnvironmentalGlobalsColorRunMode RunMode; // 0x30
    bool bApplyToMaterialParameterCollection; // 0x58
    bool bApplyToNiagaraParameterCollection; // 0x59
    char pad_5a[0x6];
    static UEnvironmentalGlobalsColorVar* StaticClass();
}; // Size: 0x60
#pragma pack(pop)

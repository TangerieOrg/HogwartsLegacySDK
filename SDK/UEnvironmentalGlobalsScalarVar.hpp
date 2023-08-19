#pragma once
#include <cstdint>
#include "FEnvironmentalGlobalsScalarRunMode.hpp"
#include "UEnvironmentalGlobalsVar.hpp"
#pragma pack(push, 1)
class UEnvironmentalGlobalsScalarVar : public UEnvironmentalGlobalsVar {
public:
    FName ParameterName; // 0x28
    FEnvironmentalGlobalsScalarRunMode RunMode; // 0x30
    bool bApplyToMaterialParameterCollection; // 0x40
    bool bApplyToNiagaraParameterCollection; // 0x41
    char pad_42[0x6];
    static UEnvironmentalGlobalsScalarVar* StaticClass();
}; // Size: 0x48
#pragma pack(pop)

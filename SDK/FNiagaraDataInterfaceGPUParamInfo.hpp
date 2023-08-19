#pragma once
#include <cstdint>
#include "FNiagaraDataInterfaceGeneratedFunction.hpp"
#pragma pack(push, 1)
struct FNiagaraDataInterfaceGPUParamInfo {
    FString DataInterfaceHLSLSymbol; // 0x0
    FString DIClassName; // 0x10
    TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x20
}; // Size: 0x30
#pragma pack(pop)

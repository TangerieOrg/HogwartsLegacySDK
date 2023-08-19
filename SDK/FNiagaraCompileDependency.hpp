#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FNiagaraVariableBase.hpp"
#pragma pack(push, 1)
struct FNiagaraCompileDependency {
    FString LinkerErrorMessage; // 0x0
    FGuid NodeGuid; // 0x10
    FGuid PinGuid; // 0x20
    TArray<FGuid> StackGuids; // 0x30
    FNiagaraVariableBase DependentVariable; // 0x40
    char pad_4c[0x4];
}; // Size: 0x50
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FNiagaraVariableWithOffset.hpp"
class UObject;
class UNiagaraDataInterface;
#pragma pack(push, 1)
struct FNiagaraParameterStore {
    char pad_0[0x8];
    UObject* Owner; // 0x8
    TArray<FNiagaraVariableWithOffset> SortedParameterOffsets; // 0x10
    TArray<uint8_t> ParameterData; // 0x20
    TArray<UNiagaraDataInterface*> DataInterfaces; // 0x30
    TArray<UObject*> UObjects; // 0x40
    char pad_50[0x28];
}; // Size: 0x78
#pragma pack(pop)

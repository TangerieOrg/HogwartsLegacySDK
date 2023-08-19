#pragma once
#include <cstdint>
#include "ENiagaraSimTarget.hpp"
#include "FNiagaraDataSetID.hpp"
#include "FNiagaraVariable.hpp"
#include "FNiagaraVariableLayoutInfo.hpp"
#pragma pack(push, 1)
struct FNiagaraDataSetCompiledData {
    TArray<FNiagaraVariable> Variables; // 0x0
    TArray<FNiagaraVariableLayoutInfo> VariableLayouts; // 0x10
    FNiagaraDataSetID ID; // 0x20
    uint32_t TotalFloatComponents; // 0x2c
    uint32_t TotalInt32Components; // 0x30
    uint32_t TotalHalfComponents; // 0x34
    uint8_t bRequiresPersistentIDs : 1; // 0x38
    uint8_t pad_bitfield_38_1 : 7;
    char pad_39[0x3];
    ENiagaraSimTarget SimTarget; // 0x3c
    char pad_3d[0x3];
}; // Size: 0x40
#pragma pack(pop)

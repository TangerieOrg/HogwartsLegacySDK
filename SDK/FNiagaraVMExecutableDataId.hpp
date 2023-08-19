#pragma once
#include <cstdint>
#include "ENiagaraScriptUsage.hpp"
#include "FGuid.hpp"
#include "FNiagaraCompileHash.hpp"
#pragma pack(push, 1)
struct FNiagaraVMExecutableDataId {
    FGuid CompilerVersionID; // 0x0
    ENiagaraScriptUsage ScriptUsageType; // 0x10
    char pad_11[0x3];
    FGuid ScriptUsageTypeID; // 0x14
    uint8_t bUsesRapidIterationParams : 1; // 0x24
    uint8_t bInterpolatedSpawn : 1; // 0x24
    uint8_t bRequiresPersistentIDs : 1; // 0x24
    uint8_t pad_bitfield_24_3 : 5;
    char pad_25[0x3];
    FGuid BaseScriptID; // 0x28
    FNiagaraCompileHash BaseScriptCompileHash; // 0x38
    FGuid ScriptVersionID; // 0x48
}; // Size: 0x58
#pragma pack(pop)

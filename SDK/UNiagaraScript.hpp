#pragma once
#include <cstdint>
#include "ENiagaraScriptUsage.hpp"
#include "FGuid.hpp"
#include "FNiagaraBoundParameter.hpp"
#include "FNiagaraParameterStore.hpp"
#include "FNiagaraScriptDataInterfaceInfo.hpp"
#include "FNiagaraScriptExecutionParameterStore.hpp"
#include "FNiagaraVMExecutableData.hpp"
#include "FNiagaraVMExecutableDataId.hpp"
#include "UNiagaraScriptBase.hpp"
class UNiagaraParameterCollection;
#pragma pack(push, 1)
class UNiagaraScript : public UNiagaraScriptBase {
public:
    ENiagaraScriptUsage Usage; // 0x28
    char pad_29[0x3];
    FGuid UsageId; // 0x2c
    char pad_3c[0x4];
    FNiagaraParameterStore RapidIterationParameters; // 0x40
    FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore; // 0xb8
    TArray<FNiagaraBoundParameter> ScriptExecutionBoundParameters; // 0x150
    FNiagaraVMExecutableDataId CachedScriptVMId; // 0x160
    char pad_1b8[0x10];
    FNiagaraVMExecutableData CachedScriptVM; // 0x1c8
    TArray<UNiagaraParameterCollection*> CachedParameterCollectionReferences; // 0x2b8
    TArray<FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces; // 0x2c8
    char pad_2d8[0x8];
    static UNiagaraScript* StaticClass();
    void RaiseOnGPUCompilationComplete();
}; // Size: 0x2e0
#pragma pack(pop)

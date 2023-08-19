#pragma once
#include <cstdint>
#include "FNiagaraDataSetCompiledData.hpp"
#include "FNiagaraParameterDataSetBindingCollection.hpp"
#include "FNiagaraParameterStore.hpp"
#pragma pack(push, 1)
struct FNiagaraSystemCompiledData {
    FNiagaraParameterStore InstanceParamStore; // 0x0
    FNiagaraDataSetCompiledData DataSetCompiledData; // 0x78
    FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData; // 0xb8
    FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData; // 0xf8
    FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding; // 0x138
    FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding; // 0x158
    FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding; // 0x178
    TArray<FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings; // 0x198
    FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding; // 0x1a8
    FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding; // 0x1c8
    FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding; // 0x1e8
    TArray<FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings; // 0x208
}; // Size: 0x218
#pragma pack(pop)

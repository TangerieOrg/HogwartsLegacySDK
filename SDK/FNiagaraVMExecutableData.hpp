#pragma once
#include <cstdint>
#include "ENiagaraScriptCompileStatus.hpp"
#include "FNiagaraCompilerTag.hpp"
#include "FNiagaraDataInterfaceGPUParamInfo.hpp"
#include "FNiagaraDataSetID.hpp"
#include "FNiagaraDataSetProperties.hpp"
#include "FNiagaraScriptDataInterfaceCompileInfo.hpp"
#include "FNiagaraScriptDataUsageInfo.hpp"
#include "FNiagaraStatScope.hpp"
#include "FNiagaraVariable.hpp"
#include "FSimulationStageMetaData.hpp"
#include "FVMExternalFunctionBindingInfo.hpp"
#pragma pack(push, 1)
struct FNiagaraVMExecutableData {
    TArray<uint8_t> ByteCode; // 0x0
    TArray<uint8_t> OptimizedByteCode; // 0x10
    int32_t NumTempRegisters; // 0x20
    int32_t NumUserPtrs; // 0x24
    TArray<FNiagaraCompilerTag> CompileTags; // 0x28
    TArray<uint8_t> ScriptLiterals; // 0x38
    TArray<FNiagaraVariable> Attributes; // 0x48
    FNiagaraScriptDataUsageInfo DataUsage; // 0x58
    char pad_59[0x7];
    TArray<FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo; // 0x60
    TArray<FVMExternalFunctionBindingInfo> CalledVMExternalFunctions; // 0x70
    char pad_80[0x10];
    TArray<FNiagaraDataSetID> ReadDataSets; // 0x90
    TArray<FNiagaraDataSetProperties> WriteDataSets; // 0xa0
    TArray<FNiagaraStatScope> StatScopes; // 0xb0
    TArray<FNiagaraDataInterfaceGPUParamInfo> DIParamInfo; // 0xc0
    ENiagaraScriptCompileStatus LastCompileStatus; // 0xd0
    char pad_d1[0x7];
    TArray<FSimulationStageMetaData> SimulationStageMetaData; // 0xd8
    uint8_t bReadsSignificanceIndex : 1; // 0xe8
    uint8_t bNeedsGPUContextInit : 1; // 0xe8
    uint8_t pad_bitfield_e8_2 : 6;
    char pad_e9[0x7];
}; // Size: 0xf0
#pragma pack(pop)

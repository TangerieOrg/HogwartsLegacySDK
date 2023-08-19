#pragma once
#include <cstdint>
#include "ESkinFXEnvelopeState.hpp"
#include "FMaterialSwapParameters.hpp"
#include "FMaterialSwapRules.hpp"
#include "FSkinFXASREnvelopeState.hpp"
#include "FSkinFXParameterDriverContext.hpp"
#include "FSkinFXRunningEffect.hpp"
class UNiagaraMaterialSwapDriver;
class UMaterialSwap;
#pragma pack(push, 1)
struct FSkinFXRunningEffectInstance {
    FSkinFXRunningEffect Effect; // 0x0
    FSkinFXASREnvelopeState Envelope; // 0x20
    char pad_64[0xc];
    FSkinFXParameterDriverContext DriverContext; // 0x70
    UNiagaraMaterialSwapDriver* NiagaraDriver; // 0x8c0
    UMaterialSwap* MaterialSwap; // 0x8c8
    FMaterialSwapRules MaterialSwapRules; // 0x8d0
    FMaterialSwapParameters HistoryParameters; // 0x9b0
    FMaterialSwapParameters CommitBlueprintParameters; // 0xa00
    FMaterialSwapParameters StagedBlueprintParameters; // 0xa50
    int32_t EventBroadcastMask; // 0xaa0
    ESkinFXEnvelopeState EnvelopeState; // 0xaa4
    bool bEnvelopeStateValid; // 0xaa5
    bool bHaveAppliedInitialParameters; // 0xaa6
    char pad_aa7[0x9];
}; // Size: 0xab0
#pragma pack(pop)

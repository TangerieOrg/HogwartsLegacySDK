#pragma once
#include <cstdint>
#include "ESkinFXEffectEndStyle.hpp"
#include "FMaterialSwapParameters.hpp"
#include "FMaterialSwapRules.hpp"
#include "FMultiFX2_SkinFxImpactOptions.hpp"
#include "FNiagaraMaterialDriverSetup.hpp"
#include "FSkinFXASREnvelope.hpp"
#include "UMultiFX2_Filtered.hpp"
class UClass;
class UMaterialSwapMeshState;
#pragma pack(push, 1)
class UMultiFX2_SkinFx : public UMultiFX2_Filtered {
public:
    UClass* SkinFX; // 0x68
    FMaterialSwapParameters Params; // 0x70
    FMaterialSwapRules Rules; // 0xc0
    FSkinFXASREnvelope EnvelopeOverride; // 0x1a0
    float TimeScale; // 0x1cc
    FNiagaraMaterialDriverSetup NiagaraOverride; // 0x1d0
    TArray<UMaterialSwapMeshState*> OverrideMeshStates; // 0x248
    ESkinFXEffectEndStyle EndStyle; // 0x258
    FMultiFX2_SkinFxImpactOptions ImpactOptions; // 0x259
    bool bUseEnvelopeOverride; // 0x25a
    bool bUseNiagaraOverride; // 0x25b
    bool bUseMeshStatesOverride; // 0x25c
    char pad_25d[0x3];
    static UMultiFX2_SkinFx* StaticClass();
}; // Size: 0x260
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "EMaterialPermuterLoadingPriority.hpp"
#include "FMaterialSwapParameters.hpp"
#include "FMaterialSwapRules.hpp"
#include "FNiagaraMaterialDriverSetup.hpp"
#include "FSceneActionSkinFXProviderParameters.hpp"
#include "FSkinFXASREnvelope.hpp"
#include "USceneRigObjectActionBase.hpp"
class UClass;
class UMaterialSwapMeshState;
class USceneActionBlueprintVarProvider;
#pragma pack(push, 1)
class USceneAction_SkinFX : public USceneRigObjectActionBase {
public:
    UClass* SkinFX; // 0xa0
    EMaterialPermuterLoadingPriority MaterialLoadPriority; // 0xa8
    char pad_a9[0x7];
    FMaterialSwapParameters InitialParameters; // 0xb0
    FSceneActionSkinFXProviderParameters SceneRigParameters; // 0x100
    FMaterialSwapRules swapRules; // 0x130
    FNiagaraMaterialDriverSetup NiagaraOverride; // 0x210
    FSkinFXASREnvelope EnvelopeOverride; // 0x288
    char pad_2b4[0x4];
    TArray<UMaterialSwapMeshState*> OverrideMeshStates; // 0x2b8
    TArray<USceneActionBlueprintVarProvider*> SkinFXBlueprintVariables; // 0x2c8
    bool bUseInitialParameters; // 0x2d8
    bool bUseSceneRigParameters; // 0x2d9
    bool bUseSwapRules; // 0x2da
    bool bUseNiagaraOverride; // 0x2db
    bool bUseEnvelopeOverride; // 0x2dc
    bool bUseMeshStatesOverride; // 0x2dd
    char pad_2de[0x2];
    static USceneAction_SkinFX* StaticClass();
}; // Size: 0x2e0
#pragma pack(pop)

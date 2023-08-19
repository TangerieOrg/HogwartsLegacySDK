#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ESkinFXEffectPriority.hpp"
#include "ESkinFXEffectSwapType.hpp"
#include "ESkinFXEffectTimeSource.hpp"
#include "FMaterialSwapRules.hpp"
#include "FNiagaraMaterialDriverSetup.hpp"
#include "FSkinFXASREnvelope.hpp"
#include "FSkinFXColor.hpp"
#include "FSkinFXColorCurve.hpp"
#include "FSkinFXFunctionMod.hpp"
#include "FSkinFXNoiseFunctionMod.hpp"
#include "FSkinFXScalar.hpp"
#include "FSkinFXScalarCurve.hpp"
#include "FSkinFXSocket.hpp"
#include "FSkinFXSocketLerp.hpp"
#include "FSkinFXStandardParams.hpp"
#include "FSkinFXStandardParamsInitial.hpp"
#include "FSkinFXSubTypeProperty.hpp"
#include "FSkinFXTexture.hpp"
class UMaterialSwapMeshState;
class USkinFXEventTrigger;
class USkinFXParameterDriver;
#pragma pack(push, 1)
class ASkinFXDefinition : public AActor {
public:
    ESkinFXEffectPriority Priority; // 0x248
    char pad_249[0x3];
    FName MaterialSuffixOverride; // 0x24c
    FSkinFXSubTypeProperty MaterialSubTypeOverride; // 0x254
    ESkinFXEffectSwapType SwapType; // 0x25c
    char pad_25d[0x2b];
    FMaterialSwapRules DefaultSwapRules; // 0x288
    TArray<UMaterialSwapMeshState*> DefaultMeshStates; // 0x368
    FSkinFXASREnvelope ASREnvelope; // 0x378
    char pad_3a4[0x4];
    TArray<USkinFXEventTrigger*> EventTriggers; // 0x3a8
    TArray<FSkinFXScalar> Scalars; // 0x3b8
    TArray<FSkinFXScalarCurve> ScalarCurves; // 0x3c8
    TArray<FSkinFXColor> Colors; // 0x3d8
    TArray<FSkinFXColorCurve> ColorCurves; // 0x3e8
    TArray<FSkinFXSocket> Sockets; // 0x3f8
    TArray<FSkinFXSocketLerp> LerpSockets; // 0x408
    TArray<FSkinFXTexture> Textures; // 0x418
    TArray<USkinFXParameterDriver*> Drivers; // 0x428
    TArray<FSkinFXFunctionMod> FunctionMods; // 0x438
    TArray<FSkinFXNoiseFunctionMod> NoiseFunctionMods; // 0x448
    FNiagaraMaterialDriverSetup NiagaraParameters; // 0x458
    FSkinFXStandardParamsInitial StandardParamsStartOnly; // 0x4d0
    FSkinFXStandardParams StandardParamsEveryFrame; // 0x530
    TArray<void*> ExtraPreloads; // 0x5a8
    bool bAllowInBackground; // 0x5b8
    ESkinFXEffectTimeSource TimeSource; // 0x5b9
    bool bDestroyActorWhenDone; // 0x5ba
    bool bFullRetriggerOnRestart; // 0x5bb
    bool bShowSwapErrors; // 0x5bc
    char pad_5bd[0x3];
    static ASkinFXDefinition* StaticClass();
}; // Size: 0x5c0
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FBox.hpp"
#include "FNiagaraEmitterHandle.hpp"
#include "FNiagaraSystemCompiledData.hpp"
#include "FNiagaraSystemScalabilityOverride.hpp"
#include "FNiagaraSystemScalabilityOverrides.hpp"
#include "FNiagaraUserRedirectionParameterStore.hpp"
#include "UFXSystemAsset.hpp"
class UNiagaraEffectType;
class UNiagaraParameterCollectionInstance;
class UNiagaraScript;
#pragma pack(push, 1)
class UNiagaraSystem : public UFXSystemAsset {
public:
    bool bDumpDebugSystemInfo; // 0x30
    bool bDumpDebugEmitterInfo; // 0x31
    char pad_32[0x1];
    bool bRequireCurrentFrameData; // 0x33
    uint8_t bFixedBounds : 1; // 0x34
    uint8_t pad_bitfield_34_1 : 7;
    char pad_35[0x3];
    UNiagaraEffectType* EffectType; // 0x38
    bool bOverrideScalabilitySettings; // 0x40
    char pad_41[0x7];
    TArray<FNiagaraSystemScalabilityOverride> ScalabilityOverrides; // 0x48
    FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides; // 0x58
    bool bPauseWhenOffscreenOverride; // 0x68
    char pad_69[0x7];
    TArray<FNiagaraEmitterHandle> EmitterHandles; // 0x70
    TArray<UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides; // 0x80
    UNiagaraScript* SystemSpawnScript; // 0x90
    UNiagaraScript* SystemUpdateScript; // 0x98
    char pad_a0[0x10];
    FNiagaraSystemCompiledData SystemCompiledData; // 0xb0
    FNiagaraUserRedirectionParameterStore ExposedParameters; // 0x2c8
    FBox FixedBounds; // 0x390
    bool bAutoDeactivate; // 0x3ac
    char pad_3ad[0x3];
    float WarmupTime; // 0x3b0
    int32_t WarmupTickCount; // 0x3b4
    float WarmupTickDelta; // 0x3b8
    bool bHasSystemScriptDIsWithPerInstanceData; // 0x3bc
    bool bNeedsGPUContextInitForDataInterfaces; // 0x3bd
    char pad_3be[0x2];
    TArray<FName> UserDINamesReadInSystemScripts; // 0x3c0
    bool bIsInfiniteLooping; // 0x3d0
    char pad_3d1[0xd7];
    static UNiagaraSystem* StaticClass();
}; // Size: 0x4a8
#pragma pack(pop)

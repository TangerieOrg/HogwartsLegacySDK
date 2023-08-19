#pragma once
#include <cstdint>
#include "ENiagaraDebugHudFont.hpp"
#include "ENiagaraDebugHudVerbosity.hpp"
#include "ENiagaraDebugPlaybackMode.hpp"
#include "FNiagaraDebugHUDVariable.hpp"
#include "FNiagaraDebugHudTextOptions.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FNiagaraDebugHUDSettingsData {
    bool bEnabled; // 0x0
    bool bValidateSystemSimulationDataBuffers; // 0x1
    bool bValidateParticleDataBuffers; // 0x2
    bool bOverviewEnabled; // 0x3
    ENiagaraDebugHudFont OverviewFont; // 0x4
    FVector2D OverviewLocation; // 0x8
    FString ActorFilter; // 0x10
    bool bComponentFilterEnabled; // 0x20
    char pad_21[0x7];
    FString ComponentFilter; // 0x28
    bool bSystemFilterEnabled; // 0x38
    char pad_39[0x7];
    FString SystemFilter; // 0x40
    bool bEmitterFilterEnabled; // 0x50
    char pad_51[0x7];
    FString EmitterFilter; // 0x58
    bool bActorFilterEnabled; // 0x68
    char pad_69[0x3];
    ENiagaraDebugHudVerbosity SystemDebugVerbosity; // 0x6c
    ENiagaraDebugHudVerbosity SystemEmitterVerbosity; // 0x70
    bool bSystemShowBounds; // 0x74
    bool bSystemShowActiveOnlyInWorld; // 0x75
    bool bShowSystemVariables; // 0x76
    char pad_77[0x1];
    TArray<FNiagaraDebugHUDVariable> SystemVariables; // 0x78
    FNiagaraDebugHudTextOptions SystemTextOptions; // 0x88
    bool bShowParticleVariables; // 0x98
    bool bEnableGpuParticleReadback; // 0x99
    char pad_9a[0x6];
    TArray<FNiagaraDebugHUDVariable> ParticlesVariables; // 0xa0
    FNiagaraDebugHudTextOptions ParticleTextOptions; // 0xb0
    bool bShowParticlesVariablesWithSystem; // 0xc0
    bool bUseMaxParticlesToDisplay; // 0xc1
    char pad_c2[0x2];
    int32_t MaxParticlesToDisplay; // 0xc4
    ENiagaraDebugPlaybackMode PlaybackMode; // 0xc8
    bool bPlaybackRateEnabled; // 0xc9
    char pad_ca[0x2];
    float PlaybackRate; // 0xcc
    bool bLoopTimeEnabled; // 0xd0
    char pad_d1[0x3];
    float LoopTime; // 0xd4
    bool bShowGlobalBudgetInfo; // 0xd8
    char pad_d9[0x7];
}; // Size: 0xe0
#pragma pack(pop)

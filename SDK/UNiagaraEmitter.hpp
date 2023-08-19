#pragma once
#include <cstdint>
#include "EEmitterCullingPriority.hpp"
#include "ENiagaraSimTarget.hpp"
#include "EParticleAllocationMode.hpp"
#include "FBox.hpp"
#include "FNiagaraDetailsLevelScaleOverrides.hpp"
#include "FNiagaraEmitterScalabilityOverrides.hpp"
#include "FNiagaraEmitterScriptProperties.hpp"
#include "FNiagaraEventScriptProperties.hpp"
#include "FNiagaraPlatformSet.hpp"
#include "UObject.hpp"
class UNiagaraRendererProperties;
class UNiagaraSimulationStageBase;
class UNiagaraScript;
#pragma pack(push, 1)
class UNiagaraEmitter : public UObject {
public:
    bool bLocalSpace; // 0x28
    bool bDeterminism; // 0x29
    char pad_2a[0x2];
    int32_t RandomSeed; // 0x2c
    EParticleAllocationMode AllocationMode; // 0x30
    char pad_31[0x3];
    int32_t PreAllocationCount; // 0x34
    FNiagaraEmitterScriptProperties UpdateScriptProps; // 0x38
    FNiagaraEmitterScriptProperties SpawnScriptProps; // 0x60
    ENiagaraSimTarget SimTarget; // 0x88
    char pad_89[0x3];
    FBox FixedBounds; // 0x8c
    int32_t MinDetailLevel; // 0xa8
    int32_t MaxDetailLevel; // 0xac
    FNiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides; // 0xb0
    char pad_c4[0x4];
    FNiagaraPlatformSet Platforms; // 0xc8
    FNiagaraEmitterScalabilityOverrides ScalabilityOverrides; // 0xf8
    EEmitterCullingPriority CullingPriority; // 0x108
    char pad_109[0x3];
    int32_t DisableLightsForQualityLevel; // 0x10c
    uint8_t bInterpolatedSpawning : 1; // 0x110
    uint8_t bFixedBounds : 1; // 0x110
    uint8_t bUseMinDetailLevel : 1; // 0x110
    uint8_t bUseMaxDetailLevel : 1; // 0x110
    uint8_t bOverrideGlobalSpawnCountScale : 1; // 0x110
    uint8_t bRequiresPersistentIDs : 1; // 0x110
    uint8_t bCombineEventSpawn : 1; // 0x110
    uint8_t pad_bitfield_110_7 : 1;
    char pad_111[0x3];
    float MaxDeltaTimePerTick; // 0x114
    uint32_t DefaultShaderStageIndex; // 0x118
    uint32_t MaxUpdateIterations; // 0x11c
    char pad_120[0x50];
    uint8_t bSimulationStagesEnabled : 1; // 0x170
    uint8_t bDeprecatedShaderStagesEnabled : 1; // 0x170
    uint8_t bLimitDeltaTime : 1; // 0x170
    uint8_t pad_bitfield_170_3 : 5;
    char pad_171[0x7];
    FString UniqueEmitterName; // 0x178
    TArray<UNiagaraRendererProperties*> RendererProperties; // 0x188
    TArray<FNiagaraEventScriptProperties> EventHandlerScriptProps; // 0x198
    TArray<UNiagaraSimulationStageBase*> SimulationStages; // 0x1a8
    UNiagaraScript* GPUComputeScript; // 0x1b8
    TArray<FName> SharedEventGeneratorIds; // 0x1c0
    char pad_1d0[0xd8];
    static UNiagaraEmitter* StaticClass();
}; // Size: 0x2a8
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "EWorldFXDistanceType.hpp"
#include "FNiagaraHelpersInitializerRaw.hpp"
#include "FTableRowBase.hpp"
#include "FVector.hpp"
#include "FWorldFXAudioEventRTPC.hpp"
#include "FWorldFXCascadeSystemParam.hpp"
#include "FWorldFXPresetRuleName.hpp"
class UAkAudioEvent;
#pragma pack(push, 1)
struct FWorldFXFullPreset : public FTableRowBase {
    FWorldFXPresetRuleName Rule; // 0x8
    UAkAudioEvent* SFXAudioEvent; // 0x10
    FName SFXEventName; // 0x18
    FVector SFXOffset; // 0x20
    FVector SFXScale; // 0x2c
    float SFXCullingDistanceMeters; // 0x38
    EWorldFXDistanceType SFXCullingDistanceType; // 0x3c
    char pad_3d[0x3];
    float SFXAttenuationScalingFactor; // 0x40
    float SFXNoTickRadius; // 0x44
    float SFXOcclusionRefreshInterval; // 0x48
    ECollisionChannel SFXOcclusionCollisionChannel; // 0x4c
    bool bSFXUseReverbVolumes; // 0x4d
    bool bSFXEnableSpotReflectors; // 0x4e
    char pad_4f[0x1];
    float SFXOuterRadius; // 0x50
    float SFXInnerRadius; // 0x54
    TArray<FWorldFXAudioEventRTPC> RTPCs; // 0x58
    char pad_68[0x28];
    TArray<void*> CascadeMaterialOverrides; // 0x90
    TArray<FWorldFXCascadeSystemParam> CascadeInstanceParameters; // 0xa0
    float CascadeCullingDistanceMeters; // 0xb0
    EWorldFXDistanceType CascadeCullingDistanceType; // 0xb4
    char pad_b5[0x2b];
    TArray<void*> NiagaraMaterialOverrides; // 0xe0
    FNiagaraHelpersInitializerRaw NiagaraInitializers; // 0xf0
    float NiagaraCullingDistanceMeters; // 0x160
    EWorldFXDistanceType NiagaraCullingDistanceType; // 0x164
    bool bSpawnAttached; // 0x165
    char pad_166[0x2];
}; // Size: 0x168
#pragma pack(pop)

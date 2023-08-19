#pragma once
#include <cstdint>
#include "FWeatherSurfaceCharacterFXParameter.hpp"
class UClass;
class UNiagaraSystem;
class UAkAudioEvent;
#pragma pack(push, 1)
struct FWeatherSurfaceCharacterFXSettings {
    UClass* SkinFX; // 0x0
    FName SkinFXStormLocalCoverageParameter; // 0x8
    FWeatherSurfaceCharacterFXParameter SkinFXParameter; // 0x10
    FWeatherSurfaceCharacterFXParameter SkinFXParameterExtra; // 0x20
    UNiagaraSystem* NiagaraVFX; // 0x30
    FName NiagaraVFXSpawnRateMultiply; // 0x38
    FName NiagaraVFXStormLocalCoverageParameter; // 0x40
    UAkAudioEvent* StartSoundFX; // 0x48
    UAkAudioEvent* EndSoundFX; // 0x50
    float FullCoverageMinutes; // 0x58
    float FullDryMinutes; // 0x5c
    float ClampCoverage; // 0x60
    float LocalCoverateRateFilter; // 0x64
    TArray<FName> SwapCharacterClassNames; // 0x68
    TArray<FName> NoSwapActorTags; // 0x78
    FName AlwaysOutdoorsActorTag; // 0x88
    FName PreferredInsideComponentName; // 0x90
    uint8_t bSetSkinFXStormLocalCoverageParameter : 1; // 0x98
    uint8_t bSetNiagaraVFXSpawnRateMultiply : 1; // 0x98
    uint8_t bSetNiagaraVFXStormLocalCoverageParameter : 1; // 0x98
    uint8_t pad_bitfield_98_3 : 5;
    char pad_99[0x7];
}; // Size: 0xa0
#pragma pack(pop)

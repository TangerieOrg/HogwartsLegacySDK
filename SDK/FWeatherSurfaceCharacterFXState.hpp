#pragma once
#include <cstdint>
#include "EWeatherSurfaceCharacterFXWetState.hpp"
#include "FMaterialSwapParameters.hpp"
#include "FWeatherSurfaceCharacterFXSettings.hpp"
class USkinFXComponent;
class UNiagaraComponent;
class USaveReceivesWeatherDecalsStateActor;
#pragma pack(push, 1)
struct FWeatherSurfaceCharacterFXState {
    FWeatherSurfaceCharacterFXSettings Settings; // 0x0
    USkinFXComponent* SkinFX; // 0xa0
    FName SkinFXName; // 0xa8
    UNiagaraComponent* NiagaraVFX; // 0xb0
    USaveReceivesWeatherDecalsStateActor* WeatherDecalsState; // 0xb8
    int32_t StartSoundFXHandle; // 0xc0
    int32_t EndSoundFXHandle; // 0xc4
    FMaterialSwapParameters SkinFXParameters; // 0xc8
    float LocalCoverage; // 0x118
    float LocalCoverageRate; // 0x11c
    float CachedIndoors; // 0x120
    float CachedIndoorsAgeMilliseconds; // 0x124
    char pad_128[0x8];
    float NextSkinFXParameterUpdate; // 0x130
    float SuspendedTimer; // 0x134
    EWeatherSurfaceCharacterFXWetState State; // 0x138
    uint8_t bCheckedIfSwappable : 1; // 0x139
    uint8_t bSuspended : 1; // 0x139
    uint8_t bAlwaysOutdoors : 1; // 0x139
    uint8_t bExactInside : 1; // 0x139
    uint8_t bDryingOut : 1; // 0x139
    uint8_t pad_bitfield_139_5 : 3;
    char pad_13a[0x6];
}; // Size: 0x140
#pragma pack(pop)

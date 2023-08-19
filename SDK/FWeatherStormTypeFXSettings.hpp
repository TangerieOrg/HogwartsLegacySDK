#pragma once
#include <cstdint>
class UNiagaraSystem;
class UAkAudioEvent;
#pragma pack(push, 1)
struct FWeatherStormTypeFXSettings {
    int32_t PrecipitationTypes; // 0x0
    int32_t StormTypes; // 0x4
    UNiagaraSystem* NiagaraVFX; // 0x8
    UAkAudioEvent* StartSoundFX; // 0x10
    UAkAudioEvent* EndSoundFX; // 0x18
}; // Size: 0x20
#pragma pack(pop)

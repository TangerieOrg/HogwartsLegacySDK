#pragma once
#include <cstdint>
class UNiagaraComponent;
class UAkAudioEvent;
#pragma pack(push, 1)
struct FWeatherStormTypeFXSettingsState {
    UNiagaraComponent* NiagaraVFXComponent; // 0x0
    int32_t SoundFXHandle; // 0x8
    char pad_c[0x4];
    UAkAudioEvent* EndSoundFX; // 0x10
}; // Size: 0x18
#pragma pack(pop)

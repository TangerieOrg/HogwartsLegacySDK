#pragma once
#include <cstdint>
class UNiagaraSystem;
class UAkAudioEvent;
class UClass;
#pragma pack(push, 1)
struct FLightSwitchFX {
    UNiagaraSystem* NiagaraFX; // 0x0
    UAkAudioEvent* SoundFX; // 0x8
    UClass* AttachComponent; // 0x10
}; // Size: 0x18
#pragma pack(pop)

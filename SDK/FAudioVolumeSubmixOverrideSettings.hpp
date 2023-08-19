#pragma once
#include <cstdint>
class USoundSubmix;
class USoundEffectSubmixPreset;
#pragma pack(push, 1)
struct FAudioVolumeSubmixOverrideSettings {
    USoundSubmix* Submix; // 0x0
    TArray<USoundEffectSubmixPreset*> SubmixEffectChain; // 0x8
    float CrossfadeTime; // 0x18
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)

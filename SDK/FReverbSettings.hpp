#pragma once
#include <cstdint>
class UReverbEffect;
class USoundEffectSubmixPreset;
#pragma pack(push, 1)
struct FReverbSettings {
    bool bApplyReverb; // 0x0
    char pad_1[0x7];
    UReverbEffect* ReverbEffect; // 0x8
    USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10
    float Volume; // 0x18
    float FadeTime; // 0x1c
}; // Size: 0x20
#pragma pack(pop)

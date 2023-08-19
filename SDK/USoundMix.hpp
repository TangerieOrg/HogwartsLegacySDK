#pragma once
#include <cstdint>
#include "FAudioEQEffect.hpp"
#include "FSoundClassAdjuster.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class USoundMix : public UObject {
public:
    uint8_t bApplyEQ : 1; // 0x28
    uint8_t pad_bitfield_28_1 : 7;
    char pad_29[0x3];
    float EQPriority; // 0x2c
    FAudioEQEffect EQSettings; // 0x30
    TArray<FSoundClassAdjuster> SoundClassEffects; // 0x70
    float InitialDelay; // 0x80
    float FadeInTime; // 0x84
    float Duration; // 0x88
    float FadeOutTime; // 0x8c
    static USoundMix* StaticClass();
}; // Size: 0x90
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "UOverlapEffectsHandlerEffect.hpp"
class UAkAudioEvent;
#pragma pack(push, 1)
class UOverlapEffectsHandlerEffectSound : public UOverlapEffectsHandlerEffect {
public:
    UAkAudioEvent* Event; // 0x28
    int32_t LastSoundHandle; // 0x30
    char pad_34[0x4];
    static UOverlapEffectsHandlerEffectSound* StaticClass();
}; // Size: 0x38
#pragma pack(pop)

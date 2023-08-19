#pragma once
#include <cstdint>
#include "FSourceEffectEnvelopeFollowerSettings.hpp"
#include "USoundEffectSourcePreset.hpp"
class UEnvelopeFollowerListener;
#pragma pack(push, 1)
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset {
public:
    char pad_68[0x34];
    FSourceEffectEnvelopeFollowerSettings Settings; // 0x9c
    static USourceEffectEnvelopeFollowerPreset* StaticClass();
    void UnregisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener);
    void SetSettings(FSourceEffectEnvelopeFollowerSettings& InSettings);
    void RegisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener);
}; // Size: 0xa8
#pragma pack(pop)

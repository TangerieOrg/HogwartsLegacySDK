#pragma once
#include <cstdint>
#include "FSkinFXEnvelopeEase.hpp"
#pragma pack(push, 1)
struct FSkinFXASREnvelope {
    float AttackDuration; // 0x0
    FSkinFXEnvelopeEase AttackEase; // 0x4
    float SustainDuration; // 0x10
    bool bSustainHold; // 0x14
    char pad_15[0x3];
    float ReleaseDuration; // 0x18
    FSkinFXEnvelopeEase ReleaseEase; // 0x1c
    bool bInfiniteSustain; // 0x28
    bool bInferLifetime; // 0x29
    char pad_2a[0x2];
}; // Size: 0x2c
#pragma pack(pop)

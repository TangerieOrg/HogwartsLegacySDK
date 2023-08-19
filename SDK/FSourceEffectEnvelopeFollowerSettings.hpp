#pragma once
#include <cstdint>
#include "EEnvelopeFollowerPeakMode.hpp"
#pragma pack(push, 1)
struct FSourceEffectEnvelopeFollowerSettings {
    float AttackTime; // 0x0
    float ReleaseTime; // 0x4
    EEnvelopeFollowerPeakMode PeakMode; // 0x8
    bool bIsAnalogMode; // 0x9
    char pad_a[0x2];
}; // Size: 0xc
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FSkinFXStandardParamsBounds.hpp"
#pragma pack(push, 1)
struct FSkinFXStandardParams {
    FName Age; // 0x0
    FName EnvelopeValue; // 0x8
    FName EnvelopePhase; // 0x10
    FName EnvelopeAttackPhase; // 0x18
    FName EnvelopeSustainPhase; // 0x20
    FName EnvelopeReleasePhase; // 0x28
    FSkinFXStandardParamsBounds Bounds; // 0x30
    uint8_t bAge : 1; // 0x74
    uint8_t bEnvelopeValue : 1; // 0x74
    uint8_t bEnvelopePhase : 1; // 0x74
    uint8_t bEnvelopeAttackPhase : 1; // 0x74
    uint8_t bEnvelopeSustainPhase : 1; // 0x74
    uint8_t bEnvelopeReleasePhase : 1; // 0x74
    uint8_t pad_bitfield_74_6 : 2;
    char pad_75[0x3];
}; // Size: 0x78
#pragma pack(pop)

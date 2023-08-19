#pragma once
#include <cstdint>
#include "ESkinFXEnvelopeState.hpp"
#include "FSkinFXASREnvelope.hpp"
#pragma pack(push, 1)
struct FSkinFXASREnvelopeState {
    FSkinFXASREnvelope Envelope; // 0x0
    float Age; // 0x2c
    float StateTime; // 0x30
    ESkinFXEnvelopeState State; // 0x34
    char pad_35[0x3];
    float CurveValue; // 0x38
    float LinearValue; // 0x3c
    bool bBreakHold; // 0x40
    char pad_41[0x3];
}; // Size: 0x44
#pragma pack(pop)

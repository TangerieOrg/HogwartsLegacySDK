#pragma once
#include <cstdint>
#include "FSkinFXNoiseFunctionModAdvanced.hpp"
#pragma pack(push, 1)
struct FSkinFXNoiseFunctionMod {
    FName FunctionName; // 0x0
    float TimeBase; // 0x8
    float Lumpiness; // 0xc
    float Amplitude; // 0x10
    float Offset; // 0x14
    bool bStretchToEnvelope; // 0x18
    bool bLoop; // 0x19
    bool bMultiplyByASREnvelope; // 0x1a
    char pad_1b[0x1];
    FSkinFXNoiseFunctionModAdvanced Advanced; // 0x1c
}; // Size: 0x2c
#pragma pack(pop)

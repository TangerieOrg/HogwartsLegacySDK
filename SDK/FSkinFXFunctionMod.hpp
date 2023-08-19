#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "FSkinFXFunctionModAdvanced.hpp"
#pragma pack(push, 1)
struct FSkinFXFunctionMod {
    FName FunctionName; // 0x0
    FRuntimeFloatCurve Curve; // 0x8
    bool bStretchToEnvelope; // 0x90
    bool bLoop; // 0x91
    bool bMultiplyByASREnvelope; // 0x92
    char pad_93[0x1];
    FSkinFXFunctionModAdvanced Advanced; // 0x94
    char pad_a4[0x4];
}; // Size: 0xa8
#pragma pack(pop)

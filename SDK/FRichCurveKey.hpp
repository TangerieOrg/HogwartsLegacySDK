#pragma once
#include <cstdint>
#include "ERichCurveInterpMode.hpp"
#include "ERichCurveTangentMode.hpp"
#include "ERichCurveTangentWeightMode.hpp"
#pragma pack(push, 1)
struct FRichCurveKey {
    ERichCurveInterpMode InterpMode; // 0x0
    ERichCurveTangentMode TangentMode; // 0x1
    ERichCurveTangentWeightMode TangentWeightMode; // 0x2
    char pad_3[0x1];
    float Time; // 0x4
    float Value; // 0x8
    float ArriveTangent; // 0xc
    float ArriveTangentWeight; // 0x10
    float LeaveTangent; // 0x14
    float LeaveTangentWeight; // 0x18
}; // Size: 0x1c
#pragma pack(pop)

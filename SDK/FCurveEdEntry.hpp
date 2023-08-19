#pragma once
#include <cstdint>
#include "FColor.hpp"
class UObject;
#pragma pack(push, 1)
struct FCurveEdEntry {
    UObject* CurveObject; // 0x0
    FColor CurveColor; // 0x8
    char pad_c[0x4];
    FString CurveName; // 0x10
    int32_t bHideCurve; // 0x20
    int32_t bColorCurve; // 0x24
    int32_t bFloatingPointColorCurve; // 0x28
    int32_t bClamp; // 0x2c
    float ClampLow; // 0x30
    float ClampHigh; // 0x34
}; // Size: 0x38
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "EFXUpdatePostProcessingCurveParameter.hpp"
#include "FRuntimeFloatCurve.hpp"
#pragma pack(push, 1)
struct FPostProcessingFXCurve {
    EFXUpdatePostProcessingCurveParameter Parameter; // 0x0
    char pad_1[0x7];
    FRuntimeFloatCurve Curve; // 0x8
    bool bKillWhenDone; // 0x90
    char pad_91[0x7];
}; // Size: 0x98
#pragma pack(pop)

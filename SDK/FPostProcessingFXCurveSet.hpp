#pragma once
#include <cstdint>
#include "FPostProcessingFXCurve.hpp"
#include "FPostProcessingMIDColorCurve.hpp"
#include "FPostProcessingMIDScalarCurve.hpp"
#include "FPostProcessingVarColorCurveWithKill.hpp"
#include "FPostProcessingVarScalarCurveWithKill.hpp"
#pragma pack(push, 1)
struct FPostProcessingFXCurveSet {
    TArray<FPostProcessingFXCurve> BlendCurves; // 0x0
    TArray<FPostProcessingVarScalarCurveWithKill> PostProcessingScalarCurves; // 0x10
    TArray<FPostProcessingVarColorCurveWithKill> PostProcessingColorCurves; // 0x20
    TArray<FPostProcessingMIDScalarCurve> BlendableMaterialScalarCurves; // 0x30
    TArray<FPostProcessingMIDColorCurve> BlendableMaterialColorCurves; // 0x40
}; // Size: 0x50
#pragma pack(pop)

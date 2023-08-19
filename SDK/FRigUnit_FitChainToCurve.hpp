#pragma once
#include <cstdint>
#include "EControlRigAnimEasingType.hpp"
#include "EControlRigCurveAlignment.hpp"
#include "FCRFourPointBezier.hpp"
#include "FRigUnit_FitChainToCurve_DebugSettings.hpp"
#include "FRigUnit_FitChainToCurve_Rotation.hpp"
#include "FRigUnit_FitChainToCurve_WorkData.hpp"
#include "FRigUnit_HighlevelBaseMutable.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_FitChainToCurve : public FRigUnit_HighlevelBaseMutable {
    FName StartBone; // 0x68
    FName EndBone; // 0x70
    FCRFourPointBezier Bezier; // 0x78
    EControlRigCurveAlignment Alignment; // 0xa8
    char pad_a9[0x3];
    float Minimum; // 0xac
    float Maximum; // 0xb0
    int32_t SamplingPrecision; // 0xb4
    FVector PrimaryAxis; // 0xb8
    FVector SecondaryAxis; // 0xc4
    FVector PoleVectorPosition; // 0xd0
    char pad_dc[0x4];
    TArray<FRigUnit_FitChainToCurve_Rotation> Rotations; // 0xe0
    EControlRigAnimEasingType RotationEaseType; // 0xf0
    char pad_f1[0x3];
    float weight; // 0xf4
    bool bPropagateToChildren; // 0xf8
    char pad_f9[0x7];
    FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x100
    FRigUnit_FitChainToCurve_WorkData WorkData; // 0x160
    char pad_1f8[0x8];
}; // Size: 0x200
#pragma pack(pop)

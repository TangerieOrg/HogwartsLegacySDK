#pragma once
#include <cstdint>
#include "EIKDriver_GroundAdjustment_TraceShape.hpp"
#include "FBoneReferenceEx.hpp"
#include "FCurveIndexProperty.hpp"
#include "FCurveNameProperty.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FIKDriver_GroundAdjustment_Control {
    FBoneReferenceEx BoneReference; // 0x0
    FBoneReferenceEx TraceBoneReference; // 0x10
    EIKDriver_GroundAdjustment_TraceShape TraceShape; // 0x20
    char pad_21[0xf];
    FTransform TraceShapeLocalOffset; // 0x30
    bool bTraceComplex; // 0x60
    bool bRequireOnGroundForStepDown; // 0x61
    char pad_62[0x2];
    float MaxStepUpHeight; // 0x64
    float MaxStepDownHeight; // 0x68
    float MaxAdjustmentAngle; // 0x6c
    float MaxControlHeight; // 0x70
    FCurveIndexProperty TimeToContactCurve; // 0x74
    char pad_76[0x2];
    FCurveNameProperty TimeToContactCurveName; // 0x78
    FBoneReferenceEx AnticipationTargetBoneReference; // 0x84
    FName AlphaVariableName; // 0x94
    FName TargetTransformVariableName; // 0x9c
    FName ExtensionVariableName; // 0xa4
    float MaxLegExtension; // 0xac
    char pad_b0[0x2c0];
}; // Size: 0x370
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FRigPose.hpp"
#include "UControlRigValidationPass.hpp"
#pragma pack(push, 1)
class UControlRigNumericalValidationPass : public UControlRigValidationPass {
public:
    bool bCheckControls; // 0x28
    bool bCheckBones; // 0x29
    bool bCheckCurves; // 0x2a
    char pad_2b[0x1];
    float TranslationPrecision; // 0x2c
    float RotationPrecision; // 0x30
    float ScalePrecision; // 0x34
    float CurvePrecision; // 0x38
    FName EventNameA; // 0x3c
    FName EventNameB; // 0x44
    char pad_4c[0x4];
    FRigPose Pose; // 0x50
    static UControlRigNumericalValidationPass* StaticClass();
}; // Size: 0x60
#pragma pack(pop)

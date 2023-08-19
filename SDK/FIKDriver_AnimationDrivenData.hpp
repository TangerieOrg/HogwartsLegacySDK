#pragma once
#include <cstdint>
#include "FBoneIndexProperty.hpp"
#include "FCurveIndexProperty.hpp"
#include "FCurveNameProperty.hpp"
#include "FIKTaskReferenceProperty.hpp"
#pragma pack(push, 1)
struct FIKDriver_AnimationDrivenData {
    FIKTaskReferenceProperty Task; // 0x0
    FBoneIndexProperty RotationTargetBone; // 0x4
    FBoneIndexProperty TranslationTargetBone; // 0x8
    FCurveIndexProperty RotationWeightCurve; // 0xc
    FCurveIndexProperty TranslationWeightCurve; // 0xe
    FCurveNameProperty RotationWeightCurveName; // 0x10
    FCurveNameProperty TranslationWeightCurveName; // 0x1c
}; // Size: 0x28
#pragma pack(pop)

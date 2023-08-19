#pragma once
#include <cstdint>
#include "FTransform.hpp"
class UTransformProvider;
#pragma pack(push, 1)
struct FIKPoseFixupDefinition {
    FName ControlledBoneName; // 0x0
    FName ReferenceBoneName; // 0x8
    FName IkInputTransformName; // 0x10
    UTransformProvider* ControlledOffsetProvider; // 0x18
    FTransform ControlledOffset; // 0x20
    FName IkInputAlphaName; // 0x50
    FName AlphaCurveName; // 0x58
    bool bApplyBlendToAlphaCurve; // 0x60
    char pad_61[0x3];
    float BlendInTime; // 0x64
    float BlendOutTime; // 0x68
    bool TranslateOnly; // 0x6c
    char pad_6d[0x3];
    float ReferenceScale; // 0x70
    FName IkInputCushionAmountName; // 0x74
    float CushionAmount; // 0x7c
    UTransformProvider* TargetTransform; // 0x80
    UTransformProvider* TargetOffsetProvider; // 0x88
    FTransform TargetOffset; // 0x90
}; // Size: 0xc0
#pragma pack(pop)

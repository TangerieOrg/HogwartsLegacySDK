#pragma once
#include <cstdint>
#include "EComponentType\Type.hpp"
#include "EDrivenBoneModificationMode.hpp"
#include "EDrivenDestinationMode.hpp"
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"
class UCurveFloat;
#pragma pack(push, 1)
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase {
    FBoneReference SourceBone; // 0xc8
    UCurveFloat* DrivingCurve; // 0xd8
    float Multiplier; // 0xe0
    float RangeMin; // 0xe4
    float RangeMax; // 0xe8
    float RemappedMin; // 0xec
    float RemappedMax; // 0xf0
    FName ParameterName; // 0xf4
    FBoneReference TargetBone; // 0xfc
    EDrivenDestinationMode DestinationMode; // 0x10c
    EDrivenBoneModificationMode ModificationMode; // 0x10d
    EComponentType::Type SourceComponent; // 0x10e
    uint8_t bUseRange : 1; // 0x10f
    uint8_t bAffectTargetTranslationX : 1; // 0x10f
    uint8_t bAffectTargetTranslationY : 1; // 0x10f
    uint8_t bAffectTargetTranslationZ : 1; // 0x10f
    uint8_t bAffectTargetRotationX : 1; // 0x10f
    uint8_t bAffectTargetRotationY : 1; // 0x10f
    uint8_t bAffectTargetRotationZ : 1; // 0x10f
    uint8_t bAffectTargetScaleX : 1; // 0x10f
    uint8_t bAffectTargetScaleY : 1; // 0x110
    uint8_t bAffectTargetScaleZ : 1; // 0x110
    uint8_t pad_bitfield_110_2 : 6;
    char pad_111[0x7];
}; // Size: 0x118
#pragma pack(pop)

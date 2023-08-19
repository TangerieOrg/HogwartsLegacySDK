#pragma once
#include <cstdint>
#include "FTransform.hpp"
class USkeletalMesh;
#pragma pack(push, 1)
struct FCameraStackAnimData {
    USkeletalMesh* SkeletalMesh; // 0x0
    char pad_8[0x8];
    FTransform RootOffsetTransform; // 0x10
    FName EyeBoneName; // 0x40
    FName TargetBoneName; // 0x48
    FName SecondaryTargetBoneName; // 0x50
    FName FocusDistanceCurveName; // 0x58
    FName EnableDynamicFocusDistanceCurveName; // 0x60
    FName DynamicFocusDistanceBlendCurveName; // 0x68
    FName ApertureCurveName; // 0x70
    FName FocalLengthCurveName; // 0x78
    FName TargetFramingCurveName; // 0x80
    FName TargetPositioningCurveName; // 0x88
    char pad_90[0xc0];
}; // Size: 0x150
#pragma pack(pop)

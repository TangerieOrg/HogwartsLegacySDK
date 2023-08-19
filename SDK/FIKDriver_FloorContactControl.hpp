#pragma once
#include <cstdint>
#include "FBoneReferenceEx.hpp"
#include "FCEShape\Type.hpp"
#include "FQuat.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FIKDriver_FloorContactControl {
    FBoneReferenceEx BoneRef; // 0x0
    FName AlphaVariableName; // 0x10
    FName TransformVariableName; // 0x18
    float RampInHeight; // 0x20
    float RampOutHeight; // 0x24
    float TranslationInterpRate; // 0x28
    float RotationInterpRate; // 0x2c
    float FixupHeight; // 0x30
    char pad_34[0xc];
    FQuat FixupRotation; // 0x40
    FCEShape::Type Shape; // 0x50
    char pad_51[0x3];
    FVector Extents; // 0x54
    FTransform Offset; // 0x60
    bool DrawDebug; // 0x90
    bool UseCustomScale; // 0x91
    char pad_92[0x2];
    float CustomRayTraceStartScale; // 0x94
    float CustomRayTraceFinishScale; // 0x98
    char pad_9c[0x10];
    bool bUseFKOrientation; // 0xac
    char pad_ad[0x3];
    float MeshOffset; // 0xb0
    float Alpha; // 0xb4
    char pad_b8[0xe8];
}; // Size: 0x1a0
#pragma pack(pop)

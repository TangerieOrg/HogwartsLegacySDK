#pragma once
#include <cstdint>
#include "ESplineIKBoneAxis.hpp"
#include "FAlphaBlend.hpp"
#include "FRigUnitMutable.hpp"
#include "FRigUnit_SplineIK_DebugSettings.hpp"
#include "FRigUnit_SplineIK_WorkData.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_SplineIK : public FRigUnitMutable {
    FName StartBone; // 0x68
    FName EndBone; // 0x70
    ESplineIKBoneAxis BoneAxis; // 0x78
    bool bAutoCalculateSpline; // 0x79
    char pad_7a[0x2];
    int32_t PointCount; // 0x7c
    TArray<FTransform> ControlPoints; // 0x80
    float Roll; // 0x90
    float TwistStart; // 0x94
    float TwistEnd; // 0x98
    char pad_9c[0x4];
    FAlphaBlend TwistBlend; // 0xa0
    float Stretch; // 0xd0
    float Offset; // 0xd4
    char pad_d8[0x8];
    FRigUnit_SplineIK_DebugSettings DebugSettings; // 0xe0
    FRigUnit_SplineIK_WorkData WorkData; // 0x120
    char pad_258[0x8];
}; // Size: 0x260
#pragma pack(pop)

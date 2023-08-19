#pragma once
#include <cstdint>
#include "FRigUnitMutable.hpp"
#include "FRigUnit_NeckLookAt_BoneRotation.hpp"
#include "FRigUnit_NeckLookAt_ConeConstraint.hpp"
#include "FRigUnit_NeckLookAt_ConeConstraintBone.hpp"
#include "FRigUnit_NeckLookAt_DebugSettings.hpp"
#include "FRigUnit_NeckLookAt_SoftAngleLimits.hpp"
#include "FRigUnit_NeckLookAt_Target.hpp"
#include "FRigUnit_NeckLookAt_WorkData.hpp"
#include "FRotator.hpp"
#include "FRuntimeFloatCurve.hpp"
#pragma pack(push, 1)
struct FRigUnit_NeckLookAt : public FRigUnitMutable {
    FName EffectorBone; // 0x68
    FName StartBone; // 0x70
    FRotator SpaceRotationSetting; // 0x78
    FRotator BaseBoneRotation; // 0x84
    TArray<FRigUnit_NeckLookAt_BoneRotation> BoneRotations; // 0x90
    FRigUnit_NeckLookAt_Target Target; // 0xa0
    float SpineMobility; // 0xc4
    FRuntimeFloatCurve YawWeightCurve; // 0xc8
    FRuntimeFloatCurve PitchWeightCurve; // 0x150
    FRuntimeFloatCurve PitchFromYawWeightCurve; // 0x1d8
    FRigUnit_NeckLookAt_SoftAngleLimits InputYawMapping; // 0x260
    FRigUnit_NeckLookAt_SoftAngleLimits InputPitchMapping; // 0x270
    bool bApplyConstraints; // 0x280
    char pad_281[0xf];
    FRigUnit_NeckLookAt_ConeConstraint BaseConstraint; // 0x290
    TArray<FRigUnit_NeckLookAt_ConeConstraintBone> BoneConstraints; // 0x2c0
    FRigUnit_NeckLookAt_DebugSettings DebugSettings; // 0x2d0
    FRigUnit_NeckLookAt_WorkData WorkData; // 0x320
}; // Size: 0x500
#pragma pack(pop)

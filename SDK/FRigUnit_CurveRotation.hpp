#pragma once
#include <cstdint>
#include "FRigUnitMutable.hpp"
#include "FRigUnit_CurveRotation_DebugSettings.hpp"
#include "FRigUnit_CurveRotation_Target.hpp"
#include "FRigUnit_CurveRotation_WorkData.hpp"
#include "FRuntimeFloatCurve.hpp"
#pragma pack(push, 1)
struct FRigUnit_CurveRotation : public FRigUnitMutable {
    FName LeafBone; // 0x68
    FName TrunkBone; // 0x70
    FRigUnit_CurveRotation_Target Primary; // 0x78
    FRigUnit_CurveRotation_Target Secondary; // 0xa0
    TArray<FRuntimeFloatCurve> PerBoneAngleCurve; // 0xc8
    TArray<float> PerBoneInterpTime; // 0xd8
    bool bPropagateToChildren; // 0xe8
    char pad_e9[0x7];
    FRigUnit_CurveRotation_DebugSettings DebugSettings; // 0xf0
    FRigUnit_CurveRotation_WorkData WorkData; // 0x130
    char pad_178[0x8];
}; // Size: 0x180
#pragma pack(pop)

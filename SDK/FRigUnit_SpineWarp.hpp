#pragma once
#include <cstdint>
#include "FRigUnitMutable.hpp"
#include "FRigUnit_SpineWarp_CounterRotateBone.hpp"
#include "FRigUnit_SpineWarp_DebugSettings.hpp"
#include "FRigUnit_SpineWarp_WorkData.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_SpineWarp : public FRigUnitMutable {
    FName StartBone; // 0x68
    FName EndBone; // 0x70
    char pad_78[0x8];
    FTransform StartControl; // 0x80
    FTransform EndControl; // 0xb0
    FRuntimeFloatCurve PitchWeightCurve; // 0xe0
    bool bCounterRotateBones; // 0x168
    char pad_169[0x7];
    TArray<FRigUnit_SpineWarp_CounterRotateBone> BonesToCounterRotate; // 0x170
    float PelvisShiftForward; // 0x180
    float PelvisShiftUp; // 0x184
    float BlendWeight; // 0x188
    char pad_18c[0x4];
    FRigUnit_SpineWarp_DebugSettings DebugSettings; // 0x190
    FRigUnit_SpineWarp_WorkData WorkData; // 0x1d0
}; // Size: 0x210
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "EControlRigVectorKind.hpp"
#include "FRigUnit_HighlevelBaseMutable.hpp"
#include "FRigUnit_SpringIK_DebugSettings.hpp"
#include "FRigUnit_SpringIK_WorkData.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable {
    FName StartBone; // 0x68
    FName EndBone; // 0x70
    float HierarchyStrength; // 0x78
    float EffectorStrength; // 0x7c
    float EffectorRatio; // 0x80
    float RootStrength; // 0x84
    float RootRatio; // 0x88
    float Damping; // 0x8c
    FVector PoleVector; // 0x90
    bool bFlipPolePlane; // 0x9c
    EControlRigVectorKind PoleVectorKind; // 0x9d
    char pad_9e[0x2];
    FName PoleVectorSpace; // 0xa0
    FVector PrimaryAxis; // 0xa8
    FVector SecondaryAxis; // 0xb4
    bool bLiveSimulation; // 0xc0
    char pad_c1[0x3];
    int32_t iterations; // 0xc4
    bool bLimitLocalPosition; // 0xc8
    bool bPropagateToChildren; // 0xc9
    char pad_ca[0x6];
    FRigUnit_SpringIK_DebugSettings DebugSettings; // 0xd0
    FRigUnit_SpringIK_WorkData WorkData; // 0x120
}; // Size: 0x1d0
#pragma pack(pop)

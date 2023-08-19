#pragma once
#include <cstdint>
#include "FRigUnit_HighlevelBaseMutable.hpp"
#include "FRigUnit_MultiFABRIK_EndEffector.hpp"
#include "FRigUnit_MultiFABRIK_WorkData.hpp"
#pragma pack(push, 1)
struct FRigUnit_MultiFABRIK : public FRigUnit_HighlevelBaseMutable {
    FName RootBone; // 0x68
    TArray<FRigUnit_MultiFABRIK_EndEffector> Effectors; // 0x70
    float Precision; // 0x80
    bool bPropagateToChildren; // 0x84
    char pad_85[0x3];
    int32_t MaxIterations; // 0x88
    char pad_8c[0x4];
    FRigUnit_MultiFABRIK_WorkData WorkData; // 0x90
}; // Size: 0xf0
#pragma pack(pop)

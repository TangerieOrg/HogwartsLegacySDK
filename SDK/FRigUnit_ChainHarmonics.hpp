#pragma once
#include <cstdint>
#include "FRigUnit_ChainHarmonics_Pendulum.hpp"
#include "FRigUnit_ChainHarmonics_Reach.hpp"
#include "FRigUnit_ChainHarmonics_Wave.hpp"
#include "FRigUnit_ChainHarmonics_WorkData.hpp"
#include "FRigUnit_HighlevelBaseMutable.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_ChainHarmonics : public FRigUnit_HighlevelBaseMutable {
    FName ChainRoot; // 0x68
    FVector Speed; // 0x70
    FRigUnit_ChainHarmonics_Reach Reach; // 0x7c
    FRigUnit_ChainHarmonics_Wave Wave; // 0xa4
    char pad_e4[0x4];
    FRuntimeFloatCurve WaveCurve; // 0xe8
    FRigUnit_ChainHarmonics_Pendulum Pendulum; // 0x170
    bool bDrawDebug; // 0x1ac
    char pad_1ad[0x3];
    FTransform DrawWorldOffset; // 0x1b0
    FRigUnit_ChainHarmonics_WorkData WorkData; // 0x1e0
}; // Size: 0x270
#pragma pack(pop)

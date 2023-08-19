#pragma once
#include <cstdint>
#include "FRigElementKey.hpp"
#include "FRigUnit_ChainHarmonics_Pendulum.hpp"
#include "FRigUnit_ChainHarmonics_Reach.hpp"
#include "FRigUnit_ChainHarmonics_Wave.hpp"
#include "FRigUnit_ChainHarmonics_WorkData.hpp"
#include "FRigUnit_HighlevelBaseMutable.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_ChainHarmonicsPerItem : public FRigUnit_HighlevelBaseMutable {
    FRigElementKey ChainRoot; // 0x68
    FVector Speed; // 0x74
    FRigUnit_ChainHarmonics_Reach Reach; // 0x80
    FRigUnit_ChainHarmonics_Wave Wave; // 0xa8
    FRuntimeFloatCurve WaveCurve; // 0xe8
    FRigUnit_ChainHarmonics_Pendulum Pendulum; // 0x170
    bool bDrawDebug; // 0x1ac
    char pad_1ad[0x3];
    FTransform DrawWorldOffset; // 0x1b0
    FRigUnit_ChainHarmonics_WorkData WorkData; // 0x1e0
}; // Size: 0x270
#pragma pack(pop)

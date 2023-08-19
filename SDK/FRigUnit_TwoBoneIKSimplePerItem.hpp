#pragma once
#include <cstdint>
#include "EControlRigVectorKind.hpp"
#include "FCachedRigElement.hpp"
#include "FRigElementKey.hpp"
#include "FRigUnit_HighlevelBaseMutable.hpp"
#include "FRigUnit_TwoBoneIKSimple_DebugSettings.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_TwoBoneIKSimplePerItem : public FRigUnit_HighlevelBaseMutable {
    FRigElementKey ItemA; // 0x68
    FRigElementKey ItemB; // 0x74
    FRigElementKey EffectorItem; // 0x80
    char pad_8c[0x4];
    FTransform Effector; // 0x90
    FVector PrimaryAxis; // 0xc0
    FVector SecondaryAxis; // 0xcc
    float SecondaryAxisWeight; // 0xd8
    FVector PoleVector; // 0xdc
    EControlRigVectorKind PoleVectorKind; // 0xe8
    char pad_e9[0x3];
    FRigElementKey PoleVectorSpace; // 0xec
    bool bEnableStretch; // 0xf8
    char pad_f9[0x3];
    float StretchStartRatio; // 0xfc
    float StretchMaximumRatio; // 0x100
    float weight; // 0x104
    float ItemALength; // 0x108
    float ItemBLength; // 0x10c
    bool bPropagateToChildren; // 0x110
    char pad_111[0xf];
    FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings; // 0x120
    FCachedRigElement CachedItemAIndex; // 0x160
    FCachedRigElement CachedItemBIndex; // 0x174
    FCachedRigElement CachedEffectorItemIndex; // 0x188
    FCachedRigElement CachedPoleVectorSpaceIndex; // 0x19c
}; // Size: 0x1b0
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "EBoneControlSpace.hpp"
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FAxis.hpp"
#include "FBoneReference.hpp"
#include "FBoneSocketTarget.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase {
    FBoneReference IKBone; // 0xc8
    float StartStretchRatio; // 0xd8
    float MaxStretchScale; // 0xdc
    FVector EffectorLocation; // 0xe0
    char pad_ec[0x4];
    FBoneSocketTarget EffectorTarget; // 0xf0
    FVector JointTargetLocation; // 0x150
    char pad_15c[0x4];
    FBoneSocketTarget JointTarget; // 0x160
    FAxis TwistAxis; // 0x1c0
    EBoneControlSpace EffectorLocationSpace; // 0x1d0
    EBoneControlSpace JointTargetLocationSpace; // 0x1d1
    uint8_t bAllowStretching : 1; // 0x1d2
    uint8_t bTakeRotationFromEffectorSpace : 1; // 0x1d2
    uint8_t bMaintainEffectorRelRot : 1; // 0x1d2
    uint8_t bAllowTwist : 1; // 0x1d2
    uint8_t pad_bitfield_1d2_4 : 4;
    char pad_1d3[0xd];
}; // Size: 0x1e0
#pragma pack(pop)

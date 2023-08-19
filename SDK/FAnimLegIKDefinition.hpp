#pragma once
#include <cstdint>
#include "EAxis\Type.hpp"
#include "FBoneReference.hpp"
#pragma pack(push, 1)
struct FAnimLegIKDefinition {
    FBoneReference IKFootBone; // 0x0
    FBoneReference FKFootBone; // 0x10
    int32_t NumBonesInLimb; // 0x20
    float MinRotationAngle; // 0x24
    EAxis::Type FootBoneForwardAxis; // 0x28
    EAxis::Type HingeRotationAxis; // 0x29
    bool bEnableRotationLimit; // 0x2a
    bool bEnableKneeTwistCorrection; // 0x2b
}; // Size: 0x2c
#pragma pack(pop)

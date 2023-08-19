#pragma once
#include <cstdint>
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"
#pragma pack(push, 1)
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase {
    FBoneReference SpringBone; // 0xc8
    float MaxDisplacement; // 0xd8
    float SpringStiffness; // 0xdc
    float SpringDamping; // 0xe0
    float ErrorResetThresh; // 0xe4
    char pad_e8[0x3c];
    uint8_t bLimitDisplacement : 1; // 0x124
    uint8_t bTranslateX : 1; // 0x124
    uint8_t bTranslateY : 1; // 0x124
    uint8_t bTranslateZ : 1; // 0x124
    uint8_t bRotateX : 1; // 0x124
    uint8_t bRotateY : 1; // 0x124
    uint8_t bRotateZ : 1; // 0x124
    uint8_t pad_bitfield_124_7 : 1;
    char pad_125[0x3];
}; // Size: 0x128
#pragma pack(pop)

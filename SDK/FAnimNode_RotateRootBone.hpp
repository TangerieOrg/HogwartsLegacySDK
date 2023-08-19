#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FInputScaleBiasClamp.hpp"
#include "FPoseLink.hpp"
#include "FRotator.hpp"
#pragma pack(push, 1)
struct FAnimNode_RotateRootBone : public FAnimNode_Base {
    FPoseLink BasePose; // 0x10
    float Pitch; // 0x20
    float Yaw; // 0x24
    FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28
    FInputScaleBiasClamp YawScaleBiasClamp; // 0x58
    FRotator MeshToComponent; // 0x88
    char pad_94[0xc];
}; // Size: 0xa0
#pragma pack(pop)

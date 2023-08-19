#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAnimNode_StrideWarping : public FAnimNode_Base {
    FPoseLink BasePose; // 0x10
    float StrideWarping; // 0x20
    char pad_24[0xc];
    FTransform StartTransform; // 0x30
    bool EnableFootRayCasts; // 0x60
    char pad_61[0x3];
    float FootPlantedThreshold; // 0x64
    FVector LeftKneeJointOffset; // 0x68
    FVector RightKneeJointOffset; // 0x74
    bool DrawDebug; // 0x80
    char pad_81[0x2ff];
}; // Size: 0x380
#pragma pack(pop)

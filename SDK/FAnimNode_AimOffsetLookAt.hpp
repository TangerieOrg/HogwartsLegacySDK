#pragma once
#include <cstdint>
#include "FAnimNode_BlendSpacePlayer.hpp"
#include "FPoseLink.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer {
    char pad_e8[0x68];
    FPoseLink BasePose; // 0x150
    int32_t LODThreshold; // 0x160
    FName SourceSocketName; // 0x164
    FName PivotSocketName; // 0x16c
    FVector LookAtLocation; // 0x174
    FVector SocketAxis; // 0x180
    float Alpha; // 0x18c
    char pad_190[0x30];
}; // Size: 0x1c0
#pragma pack(pop)

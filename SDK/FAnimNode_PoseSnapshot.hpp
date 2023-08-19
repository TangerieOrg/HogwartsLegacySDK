#pragma once
#include <cstdint>
#include "ESnapshotSourceMode.hpp"
#include "FAnimNode_Base.hpp"
#include "FPoseSnapshot.hpp"
#pragma pack(push, 1)
struct FAnimNode_PoseSnapshot : public FAnimNode_Base {
    FName SnapshotName; // 0x10
    FPoseSnapshot Snapshot; // 0x18
    ESnapshotSourceMode Mode; // 0x50
    char pad_51[0x3f];
}; // Size: 0x90
#pragma pack(pop)

#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FGuideSplineTrajectory {
    float TargetPositionSpeed; // 0x0
    float SimDT; // 0x4
    float TargetHalfLife; // 0x8
    float TrajectoryHalfLife; // 0xc
    float TrajectoryDampingFactor; // 0x10
    float TrajectorySpeed; // 0x14
    float TrajectorySpeedInitialAccelerationHalfLife; // 0x18
    float TrajectorySpeedFinalDecelerationHalfLife; // 0x1c
    float StartingBurstTime; // 0x20
    float StartingBurstTrajectorySpeed; // 0x24
    float ResimulationMergeDistanceThreshold; // 0x28
    char pad_2c[0xac];
}; // Size: 0xd8
#pragma pack(pop)

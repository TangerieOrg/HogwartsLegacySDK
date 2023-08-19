#pragma once
#include <cstdint>
#include "EClusterUnionMethod.hpp"
#include "FSolverBreakingFilterSettings.hpp"
#include "FSolverCollisionFilterSettings.hpp"
#include "FSolverTrailingFilterSettings.hpp"
#pragma pack(push, 1)
struct FChaosSolverConfiguration {
    int32_t iterations; // 0x0
    int32_t CollisionPairIterations; // 0x4
    int32_t PushOutIterations; // 0x8
    int32_t CollisionPushOutPairIterations; // 0xc
    float CollisionMarginFraction; // 0x10
    float CollisionMarginMax; // 0x14
    float CollisionCullDistance; // 0x18
    float CollisionMaxPushOutVelocity; // 0x1c
    int32_t JointPairIterations; // 0x20
    int32_t JointPushOutPairIterations; // 0x24
    float ClusterConnectionFactor; // 0x28
    EClusterUnionMethod ClusterUnionConnectionType; // 0x2c
    bool bGenerateCollisionData; // 0x2d
    char pad_2e[0x2];
    FSolverCollisionFilterSettings CollisionFilterSettings; // 0x30
    bool bGenerateBreakData; // 0x40
    char pad_41[0x3];
    FSolverBreakingFilterSettings BreakingFilterSettings; // 0x44
    bool bGenerateTrailingData; // 0x54
    char pad_55[0x3];
    FSolverTrailingFilterSettings TrailingFilterSettings; // 0x58
    bool bGenerateContactGraph; // 0x68
    char pad_69[0x3];
}; // Size: 0x6c
#pragma pack(pop)

#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSolverIterations {
    int32_t SolverIterations; // 0x0
    int32_t JointIterations; // 0x4
    int32_t CollisionIterations; // 0x8
    int32_t SolverPushOutIterations; // 0xc
    int32_t JointPushOutIterations; // 0x10
    int32_t CollisionPushOutIterations; // 0x14
}; // Size: 0x18
#pragma pack(pop)

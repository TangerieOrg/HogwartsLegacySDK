#pragma once
#include <cstdint>
#include "FTransform.hpp"
class ASceneRigActor;
#pragma pack(push, 1)
struct FSplineSceneRig {
    ASceneRigActor* MainParallelSceneRigActor; // 0x0
    ASceneRigActor* InterruptParallelSceneRigActor; // 0x8
    ASceneRigActor* ResumeParallelSceneRigActor; // 0x10
    char pad_18[0x8];
    FTransform LocalTransform; // 0x20
    char pad_50[0x10];
}; // Size: 0x60
#pragma pack(pop)

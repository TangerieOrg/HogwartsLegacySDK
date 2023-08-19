#pragma once
#include <cstdint>
#include "FCRSimPointContainer.hpp"
#include "FCachedRigElement.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_SpringIK_WorkData {
    TArray<FCachedRigElement> CachedBones; // 0x0
    FCachedRigElement CachedPoleVector; // 0x10
    char pad_24[0x4];
    TArray<FTransform> Transforms; // 0x28
    FCRSimPointContainer Simulation; // 0x38
}; // Size: 0xb0
#pragma pack(pop)

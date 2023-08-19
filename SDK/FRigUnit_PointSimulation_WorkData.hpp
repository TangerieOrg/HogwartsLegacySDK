#pragma once
#include <cstdint>
#include "FCRSimPointContainer.hpp"
#include "FCachedRigElement.hpp"
#pragma pack(push, 1)
struct FRigUnit_PointSimulation_WorkData {
    FCRSimPointContainer Simulation; // 0x0
    TArray<FCachedRigElement> BoneIndices; // 0x78
}; // Size: 0x88
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FSimpleTopologyParams.hpp"
#include "FSimpleTopologyVoxelIndex.hpp"
#pragma pack(push, 1)
struct FSimpleTopologyVoxelArray {
    FSimpleTopologyParams Topology; // 0x0
    float InvVoxelSize; // 0x18
    FSimpleTopologyVoxelIndex MinVoxelIndex; // 0x1c
    FSimpleTopologyVoxelIndex MaxVoxelIndex; // 0x28
    char pad_34[0x74];
}; // Size: 0xa8
#pragma pack(pop)

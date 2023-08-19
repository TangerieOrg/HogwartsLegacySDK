#pragma once
#include <cstdint>
#include "ESimpleTopologyType.hpp"
#include "FSimpleTopologyPointNormal.hpp"
#pragma pack(push, 1)
struct FSimpleTopologyVoxel {
    FSimpleTopologyPointNormal Plane; // 0x0
    ESimpleTopologyType Type; // 0x18
    char pad_19[0x3];
}; // Size: 0x1c
#pragma pack(pop)

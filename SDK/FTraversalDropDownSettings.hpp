#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#pragma pack(push, 1)
struct FTraversalDropDownSettings {
    bool bEnableJumpDown; // 0x0
    bool bEnableTeeterOnEdge; // 0x1
    char pad_2[0x2];
    float MinJumpDownHeight; // 0x4
    float MinTeeterOnEdgeHeight; // 0x8
    float TeeterEdgeDistance; // 0xc
    ECollisionChannel DeepWaterCollisionChannel; // 0x10
    char pad_11[0x3];
}; // Size: 0x14
#pragma pack(pop)

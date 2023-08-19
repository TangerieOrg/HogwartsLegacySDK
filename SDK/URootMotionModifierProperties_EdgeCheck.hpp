#pragma once
#include <cstdint>
#include "URootMotionModifierProperties.hpp"
#pragma pack(push, 1)
class URootMotionModifierProperties_EdgeCheck : public URootMotionModifierProperties {
public:
    float DetectMaxDistance; // 0x30
    float ComputeEdgeAtThreshhold; // 0x34
    float TraceRadius; // 0x38
    bool bDebugDraw; // 0x3c
    char pad_3d[0x3];
    float SafeDistanceFromEdge; // 0x40
    float EdgeOffsetSpeed; // 0x44
    static URootMotionModifierProperties_EdgeCheck* StaticClass();
}; // Size: 0x48
#pragma pack(pop)

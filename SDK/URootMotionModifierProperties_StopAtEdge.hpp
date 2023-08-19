#pragma once
#include <cstdint>
#include "URootMotionModifierProperties.hpp"
#pragma pack(push, 1)
class URootMotionModifierProperties_StopAtEdge : public URootMotionModifierProperties {
public:
    float TraceStartUp; // 0x30
    float TraceEndDown; // 0x34
    float DesiredDistanceFromEdge; // 0x38
    bool bDebug; // 0x3c
    char pad_3d[0x3];
    static URootMotionModifierProperties_StopAtEdge* StaticClass();
}; // Size: 0x40
#pragma pack(pop)

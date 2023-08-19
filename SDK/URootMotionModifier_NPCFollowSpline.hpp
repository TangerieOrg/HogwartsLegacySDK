#pragma once
#include <cstdint>
#include "URootMotionModifier.hpp"
#pragma pack(push, 1)
class URootMotionModifier_NPCFollowSpline : public URootMotionModifier {
public:
    float Speed; // 0x50
    float InitialMaxOffsetRadius; // 0x54
    static URootMotionModifier_NPCFollowSpline* StaticClass();
}; // Size: 0x58
#pragma pack(pop)

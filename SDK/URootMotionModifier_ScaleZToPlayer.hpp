#pragma once
#include <cstdint>
#include "URootMotionModifier.hpp"
#pragma pack(push, 1)
class URootMotionModifier_ScaleZToPlayer : public URootMotionModifier {
public:
    char pad_50[0x18];
    static URootMotionModifier_ScaleZToPlayer* StaticClass();
}; // Size: 0x68
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "URootMotionModifier.hpp"
#pragma pack(push, 1)
class URootMotionModifier_JumpNudge : public URootMotionModifier {
public:
    char pad_50[0x48];
    static URootMotionModifier_JumpNudge* StaticClass();
}; // Size: 0x98
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "URootMotionModifier.hpp"
#pragma pack(push, 1)
class URootMotionModifier_JumpControl : public URootMotionModifier {
public:
    char pad_50[0x20];
    static URootMotionModifier_JumpControl* StaticClass();
}; // Size: 0x70
#pragma pack(pop)

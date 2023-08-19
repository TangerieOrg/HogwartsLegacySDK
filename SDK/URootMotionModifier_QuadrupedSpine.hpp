#pragma once
#include <cstdint>
#include "URootMotionModifier.hpp"
#pragma pack(push, 1)
class URootMotionModifier_QuadrupedSpine : public URootMotionModifier {
public:
    char pad_50[0x10];
    static URootMotionModifier_QuadrupedSpine* StaticClass();
}; // Size: 0x60
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "URootMotionModifier.hpp"
#pragma pack(push, 1)
class URootMotionModifier_DodgeRoll : public URootMotionModifier {
public:
    char pad_50[0x60];
    static URootMotionModifier_DodgeRoll* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)

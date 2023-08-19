#pragma once
#include <cstdint>
#include "URootMotionModifier.hpp"
#pragma pack(push, 1)
class URootMotionModifier_InterpToForwardSpeed : public URootMotionModifier {
public:
    float CurrentSpeed; // 0x50
    char pad_54[0x4];
    static URootMotionModifier_InterpToForwardSpeed* StaticClass();
}; // Size: 0x58
#pragma pack(pop)

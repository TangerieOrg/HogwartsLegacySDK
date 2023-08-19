#pragma once
#include <cstdint>
#include "URootMotionModifier.hpp"
#pragma pack(push, 1)
class URootMotionModifier_InterpToStop : public URootMotionModifier {
public:
    float StartSpeed; // 0x50
    float CurrentSpeed; // 0x54
    float InterpTime; // 0x58
    char pad_5c[0xc];
    static URootMotionModifier_InterpToStop* StaticClass();
}; // Size: 0x68
#pragma pack(pop)

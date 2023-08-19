#pragma once
#include <cstdint>
#include "URootMotionModifier.hpp"
#pragma pack(push, 1)
class URootMotionModifier_Telescope : public URootMotionModifier {
public:
    char pad_50[0x30];
    static URootMotionModifier_Telescope* StaticClass();
}; // Size: 0x80
#pragma pack(pop)

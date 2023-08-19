#pragma once
#include <cstdint>
#include "URootMotionModifier.hpp"
#pragma pack(push, 1)
class URootMotionModifier_Interact : public URootMotionModifier {
public:
    char pad_50[0x30];
    static URootMotionModifier_Interact* StaticClass();
}; // Size: 0x80
#pragma pack(pop)

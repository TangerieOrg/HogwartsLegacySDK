#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorSetFOV : public UCameraStackBehaviorBlend {
public:
    float FieldOfView; // 0x1b8
    char pad_1bc[0x4];
    static UCameraStackBehaviorSetFOV* StaticClass();
}; // Size: 0x1c0
#pragma pack(pop)

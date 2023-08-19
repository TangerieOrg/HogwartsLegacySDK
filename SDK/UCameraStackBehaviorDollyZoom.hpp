#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorDollyZoom : public UCameraStackBehaviorBlend {
public:
    float FieldOfView; // 0x1b8
    char pad_1bc[0x2c];
    static UCameraStackBehaviorDollyZoom* StaticClass();
}; // Size: 0x1e8
#pragma pack(pop)

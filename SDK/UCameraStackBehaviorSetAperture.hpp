#pragma once
#include <cstdint>
#include "FCameraOptionName.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorSetAperture : public UCameraStackBehaviorBlend {
public:
    float Aperture; // 0x1b8
    FCameraOptionName ApertureOptionName; // 0x1bc
    char pad_1c4[0x4];
    static UCameraStackBehaviorSetAperture* StaticClass();
}; // Size: 0x1c8
#pragma pack(pop)

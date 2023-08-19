#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorUserTilt : public UCameraStackBehaviorBlend {
public:
    FRotator MinTilt; // 0x1b8
    FRotator MaxTilt; // 0x1c4
    char pad_1d0[0x10];
    static UCameraStackBehaviorUserTilt* StaticClass();
}; // Size: 0x1e0
#pragma pack(pop)

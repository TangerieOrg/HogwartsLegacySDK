#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorLagSpringAttached : public UCameraStackBehaviorBlend {
public:
    float DamperHalflife; // 0x1b8
    float SpringHalflife; // 0x1bc
    char pad_1c0[0x68];
    static UCameraStackBehaviorLagSpringAttached* StaticClass();
}; // Size: 0x228
#pragma pack(pop)

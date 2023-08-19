#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
class UCurveVector;
#pragma pack(push, 1)
class UCameraStackBehaviorBakedShake : public UCameraStackBehaviorBlend {
public:
    UCurveVector* TraumaOverTime; // 0x1b8
    char pad_1c0[0x10];
    static UCameraStackBehaviorBakedShake* StaticClass();
}; // Size: 0x1d0
#pragma pack(pop)

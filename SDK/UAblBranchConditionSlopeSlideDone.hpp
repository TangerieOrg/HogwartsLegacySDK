#pragma once
#include <cstdint>
#include "EPhysicalSurface.hpp"
#include "UAblTaskCondition.hpp"
#pragma pack(push, 1)
class UAblBranchConditionSlopeSlideDone : public UAblTaskCondition {
public:
    float Timer; // 0x28
    EPhysicalSurface SurfaceType; // 0x2c
    char pad_2d[0x3];
    static UAblBranchConditionSlopeSlideDone* StaticClass();
}; // Size: 0x30
#pragma pack(pop)

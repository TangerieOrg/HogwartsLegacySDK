#pragma once
#include <cstdint>
#include "UAblTaskCondition.hpp"
#pragma pack(push, 1)
class UAblAmbulatoryGroundDetection : public UAblTaskCondition {
public:
    float OnGroundDistance; // 0x28
    bool bGroundMustBeWalkable; // 0x2c
    bool bGroundMustNotBePawn; // 0x2d
    bool bInverse; // 0x2e
    char pad_2f[0x1];
    static UAblAmbulatoryGroundDetection* StaticClass();
}; // Size: 0x30
#pragma pack(pop)

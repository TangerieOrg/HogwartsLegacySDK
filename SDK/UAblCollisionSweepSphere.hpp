#pragma once
#include <cstdint>
#include "UAblCollisionSweepShape.hpp"
#pragma pack(push, 1)
class UAblCollisionSweepSphere : public UAblCollisionSweepShape {
public:
    float m_radius; // 0x58
    char pad_5c[0x4];
    static UAblCollisionSweepSphere* StaticClass();
}; // Size: 0x60
#pragma pack(pop)

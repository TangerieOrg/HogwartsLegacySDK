#pragma once
#include <cstdint>
#include "UAblCollisionSweepShape.hpp"
#pragma pack(push, 1)
class UAblCollisionSweepCapsule : public UAblCollisionSweepShape {
public:
    float m_radius; // 0x58
    float m_Height; // 0x5c
    static UAblCollisionSweepCapsule* StaticClass();
}; // Size: 0x60
#pragma pack(pop)

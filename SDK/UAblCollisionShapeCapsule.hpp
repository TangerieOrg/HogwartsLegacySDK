#pragma once
#include <cstdint>
#include "UAblCollisionShape.hpp"
#pragma pack(push, 1)
class UAblCollisionShapeCapsule : public UAblCollisionShape {
public:
    float m_Height; // 0x58
    float m_radius; // 0x5c
    static UAblCollisionShapeCapsule* StaticClass();
}; // Size: 0x60
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "UAblCollisionShape.hpp"
#pragma pack(push, 1)
class UAblCollisionShapeSphere : public UAblCollisionShape {
public:
    float m_radius; // 0x58
    char pad_5c[0x4];
    static UAblCollisionShapeSphere* StaticClass();
}; // Size: 0x60
#pragma pack(pop)

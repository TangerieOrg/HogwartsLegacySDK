#pragma once
#include <cstdint>
#include "UAblCollisionShape.hpp"
#pragma pack(push, 1)
class UAblCollisionShapeCone : public UAblCollisionShape {
public:
    float m_FOV; // 0x58
    float m_Length; // 0x5c
    float m_Height; // 0x60
    bool m_Is2DQuery; // 0x64
    char pad_65[0x3];
    static UAblCollisionShapeCone* StaticClass();
}; // Size: 0x68
#pragma pack(pop)

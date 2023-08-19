#pragma once
#include <cstdint>
#include "UAblTargetingBase.hpp"
#pragma pack(push, 1)
class UAblTargetingCone : public UAblTargetingBase {
public:
    float m_FOV; // 0x78
    float m_Length; // 0x7c
    float m_Height; // 0x80
    bool m_2DQuery; // 0x84
    char pad_85[0x3];
    static UAblTargetingCone* StaticClass();
}; // Size: 0x88
#pragma pack(pop)

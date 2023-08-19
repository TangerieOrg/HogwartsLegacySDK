#pragma once
#include <cstdint>
#include "UAblTargetingBase.hpp"
#pragma pack(push, 1)
class UAblTargetingCapsule : public UAblTargetingBase {
public:
    float m_Height; // 0x78
    float m_radius; // 0x7c
    static UAblTargetingCapsule* StaticClass();
}; // Size: 0x80
#pragma pack(pop)

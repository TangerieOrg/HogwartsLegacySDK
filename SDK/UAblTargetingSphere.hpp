#pragma once
#include <cstdint>
#include "UAblTargetingBase.hpp"
#pragma pack(push, 1)
class UAblTargetingSphere : public UAblTargetingBase {
public:
    float m_radius; // 0x78
    char pad_7c[0x4];
    static UAblTargetingSphere* StaticClass();
}; // Size: 0x80
#pragma pack(pop)

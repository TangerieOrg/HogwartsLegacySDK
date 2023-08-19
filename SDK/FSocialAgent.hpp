#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FSocialAgent {
    char pad_0[0x2c];
    float m_radius; // 0x2c
    FVector m_Offset; // 0x30
    bool m_alertOnApproach; // 0x3c
    char pad_3d[0x3];
}; // Size: 0x40
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "UAblTargetingBase.hpp"
#pragma pack(push, 1)
class UAblTargetingRaycast : public UAblTargetingBase {
public:
    float m_Length; // 0x78
    bool m_OnlyWantBlockingObject; // 0x7c
    char pad_7d[0x3];
    static UAblTargetingRaycast* StaticClass();
}; // Size: 0x80
#pragma pack(pop)

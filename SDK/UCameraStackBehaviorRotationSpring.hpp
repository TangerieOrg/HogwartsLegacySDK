#pragma once
#include <cstdint>
#include "FCameraOptionName.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorRotationSpring : public UCameraStackBehaviorBlend {
public:
    float Frequency; // 0x1b8
    float DampingRatio; // 0x1bc
    FCameraOptionName FilteringAmountOptionName; // 0x1c0
    char pad_1c8[0x30];
    static UCameraStackBehaviorRotationSpring* StaticClass();
}; // Size: 0x1f8
#pragma pack(pop)

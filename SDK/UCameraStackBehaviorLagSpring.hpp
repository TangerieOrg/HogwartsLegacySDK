#pragma once
#include <cstdint>
#include "FCameraOptionName.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorLagSpring : public UCameraStackBehaviorBlend {
public:
    float Frequency; // 0x1b8
    float DampingRatio; // 0x1bc
    FCameraOptionName FilteringAmountOptionName; // 0x1c0
    char pad_1c8[0x40];
    static UCameraStackBehaviorLagSpring* StaticClass();
}; // Size: 0x208
#pragma pack(pop)

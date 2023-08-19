#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
class UCameraStackSecondaryTargetGetter;
#pragma pack(push, 1)
class UCameraStackBehaviorIncludeSecondaryTarget : public UCameraStackBehaviorBlend {
public:
    UCameraStackSecondaryTargetGetter* SecondaryTarget; // 0x1b8
    float OffsetRatio; // 0x1c0
    float TargetRadiusFactor; // 0x1c4
    char pad_1c8[0x28];
    static UCameraStackBehaviorIncludeSecondaryTarget* StaticClass();
}; // Size: 0x1f0
#pragma pack(pop)

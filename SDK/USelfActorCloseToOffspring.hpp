#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class USelfActorCloseToOffspring : public UQualifierConsideration {
public:
    float MaximumDistance; // 0x28
    bool bOnlyCheckOwnOffspring; // 0x2c
    char pad_2d[0x3];
    static USelfActorCloseToOffspring* StaticClass();
}; // Size: 0x30
#pragma pack(pop)

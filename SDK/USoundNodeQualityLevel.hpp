#pragma once
#include <cstdint>
#include "USoundNode.hpp"
#pragma pack(push, 1)
class USoundNodeQualityLevel : public USoundNode {
public:
    int32_t CookedQualityLevelIndex; // 0x48
    char pad_4c[0x4];
    static USoundNodeQualityLevel* StaticClass();
}; // Size: 0x50
#pragma pack(pop)

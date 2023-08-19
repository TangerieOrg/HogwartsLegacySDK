#pragma once
#include <cstdint>
#include "URPGAbilityEventListener.hpp"
#pragma pack(push, 1)
class URPGAbilityEventListener_OnHarvest : public URPGAbilityEventListener {
public:
    int32_t MinTier; // 0x98
    int32_t MaxTier; // 0x9c
    bool bCriticalsOnly; // 0xa0
    char pad_a1[0x7];
    static URPGAbilityEventListener_OnHarvest* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)

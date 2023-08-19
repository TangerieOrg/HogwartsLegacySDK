#pragma once
#include <cstdint>
#include "URPGAbilityEventListener.hpp"
#pragma pack(push, 1)
class URPGAbilityEventListener_OnBreed : public URPGAbilityEventListener {
public:
    int32_t MinTier; // 0x98
    int32_t MaxTier; // 0x9c
    static URPGAbilityEventListener_OnBreed* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)

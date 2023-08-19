#pragma once
#include <cstdint>
#include "UAISenseConfig.hpp"
#pragma pack(push, 1)
class UAISenseConfig_NearbyCreatures : public UAISenseConfig {
public:
    float Range; // 0x48
    char pad_4c[0x4];
    static UAISenseConfig_NearbyCreatures* StaticClass();
}; // Size: 0x50
#pragma pack(pop)

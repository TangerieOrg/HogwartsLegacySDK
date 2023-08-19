#pragma once
#include <cstdint>
#include "UWorldFXRuleCameraPlayerAttached.hpp"
#pragma pack(push, 1)
class UWorldFXRuleSpawnOnPlayerWithinDistance : public UWorldFXRuleCameraPlayerAttached {
public:
    float Distance; // 0x60
    char pad_64[0x4];
    static UWorldFXRuleSpawnOnPlayerWithinDistance* StaticClass();
}; // Size: 0x68
#pragma pack(pop)

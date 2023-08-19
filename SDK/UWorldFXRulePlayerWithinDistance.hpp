#pragma once
#include <cstdint>
#include "UWorldFXRuleCameraPlayer.hpp"
#pragma pack(push, 1)
class UWorldFXRulePlayerWithinDistance : public UWorldFXRuleCameraPlayer {
public:
    float Distance; // 0x28
    char pad_2c[0x4];
    static UWorldFXRulePlayerWithinDistance* StaticClass();
}; // Size: 0x30
#pragma pack(pop)

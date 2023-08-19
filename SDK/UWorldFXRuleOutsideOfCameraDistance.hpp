#pragma once
#include <cstdint>
#include "UWorldFXRuleCameraPlayer.hpp"
#pragma pack(push, 1)
class UWorldFXRuleOutsideOfCameraDistance : public UWorldFXRuleCameraPlayer {
public:
    float Distance; // 0x28
    char pad_2c[0x4];
    static UWorldFXRuleOutsideOfCameraDistance* StaticClass();
}; // Size: 0x30
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UWorldFXRuleCameraPlayer.hpp"
#pragma pack(push, 1)
class UWorldFXRulePlayerWithinBounds : public UWorldFXRuleCameraPlayer {
public:
    FVector Bounds; // 0x28
    char pad_34[0x4];
    static UWorldFXRulePlayerWithinBounds* StaticClass();
}; // Size: 0x38
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UWorldFXRuleCameraPlayerAttached.hpp"
#pragma pack(push, 1)
class UWorldFXRuleSpawnOnPlayerWithinBounds : public UWorldFXRuleCameraPlayerAttached {
public:
    FVector Bounds; // 0x60
    char pad_6c[0x4];
    static UWorldFXRuleSpawnOnPlayerWithinBounds* StaticClass();
}; // Size: 0x70
#pragma pack(pop)

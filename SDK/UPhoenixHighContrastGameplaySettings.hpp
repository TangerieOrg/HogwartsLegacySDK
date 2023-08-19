#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UFXAutoTriggerHighContrastGameplayConditions;
#pragma pack(push, 1)
class UPhoenixHighContrastGameplaySettings : public UDataAsset {
public:
    UFXAutoTriggerHighContrastGameplayConditions* Conditions; // 0x30
    static UPhoenixHighContrastGameplaySettings* StaticClass();
}; // Size: 0x38
#pragma pack(pop)

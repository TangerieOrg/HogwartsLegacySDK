#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class USceneActionDayNightLightControllerSettings : public UDataAsset {
public:
    float UpdateThresholdDegrees; // 0x30
    char pad_34[0x4];
    static USceneActionDayNightLightControllerSettings* StaticClass();
}; // Size: 0x38
#pragma pack(pop)

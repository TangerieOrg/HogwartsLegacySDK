#pragma once
#include <cstdint>
#include "ULightSettingsModThreshold.hpp"
#pragma pack(push, 1)
class ULightSettingsModThresholdConstantAltitude : public ULightSettingsModThreshold {
public:
    float AltitudeThreshold; // 0x28
    char pad_2c[0x4];
    static ULightSettingsModThresholdConstantAltitude* StaticClass();
}; // Size: 0x30
#pragma pack(pop)

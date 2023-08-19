#pragma once
#include <cstdint>
#include "UDynamicLightAdaptationModSettingsInLevelBase.hpp"
#pragma pack(push, 1)
class UDynamicLightAdaptationModSettingsInLevel : public UDynamicLightAdaptationModSettingsInLevelBase {
public:
    float EVAmount; // 0x38
    char pad_3c[0x4];
    static UDynamicLightAdaptationModSettingsInLevel* StaticClass();
}; // Size: 0x40
#pragma pack(pop)

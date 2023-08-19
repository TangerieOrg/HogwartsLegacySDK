#pragma once
#include <cstdint>
#include "UDynamicLightAdaptationModSettingsInLevelBase.hpp"
#pragma pack(push, 1)
class UDynamicLightAdaptationModSettingsInLevelDayNight : public UDynamicLightAdaptationModSettingsInLevelBase {
public:
    float DayEVAmount; // 0x38
    float NightEVAmount; // 0x3c
    static UDynamicLightAdaptationModSettingsInLevelDayNight* StaticClass();
}; // Size: 0x40
#pragma pack(pop)

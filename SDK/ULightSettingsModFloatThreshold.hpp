#pragma once
#include <cstdint>
#include "ULightSettingsModFloatBase.hpp"
class ULightSettingsModThreshold;
#pragma pack(push, 1)
class ULightSettingsModFloatThreshold : public ULightSettingsModFloatBase {
public:
    ULightSettingsModThreshold* Threshold; // 0x38
    float ValueAbove; // 0x40
    float ValueBelow; // 0x44
    static ULightSettingsModFloatThreshold* StaticClass();
}; // Size: 0x48
#pragma pack(pop)

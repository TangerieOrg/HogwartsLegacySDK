#pragma once
#include <cstdint>
#include "FDynamicLightAdaptationSettingsBase.hpp"
class UDynamicLightAdaptationModSettingsInterface;
#pragma pack(push, 1)
struct FDynamicLightAdaptationSettings : public FDynamicLightAdaptationSettingsBase {
    UDynamicLightAdaptationModSettingsInterface* ModInterface; // 0x48
    TArray<UDynamicLightAdaptationModSettingsInterface*> ModInterfaces; // 0x50
}; // Size: 0x60
#pragma pack(pop)

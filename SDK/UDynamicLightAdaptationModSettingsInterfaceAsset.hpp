#pragma once
#include <cstdint>
#include "UDynamicLightAdaptationModSettingsInterface.hpp"
class UDynamicLightAdaptationModSettingsAsset;
#pragma pack(push, 1)
class UDynamicLightAdaptationModSettingsInterfaceAsset : public UDynamicLightAdaptationModSettingsInterface {
public:
    UDynamicLightAdaptationModSettingsAsset* ModAsset; // 0x28
    static UDynamicLightAdaptationModSettingsInterfaceAsset* StaticClass();
}; // Size: 0x30
#pragma pack(pop)

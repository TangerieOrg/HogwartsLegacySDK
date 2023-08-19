#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UDynamicLightAdaptationModSettingsInterface;
#pragma pack(push, 1)
class UDynamicLightAdaptationModSettingsAsset : public UDataAsset {
public:
    TArray<UDynamicLightAdaptationModSettingsInterface*> Mods; // 0x30
    static UDynamicLightAdaptationModSettingsAsset* StaticClass();
}; // Size: 0x40
#pragma pack(pop)

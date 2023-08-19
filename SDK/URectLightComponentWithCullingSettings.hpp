#pragma once
#include <cstdint>
#include "FLightCullingPerLightSettings.hpp"
#include "URectLightComponent.hpp"
#pragma pack(push, 1)
class URectLightComponentWithCullingSettings : public URectLightComponent {
public:
    char pad_3e0[0x8];
    FLightCullingPerLightSettings LightCullingSettings; // 0x3e8
    char pad_3eb[0x5];
    static URectLightComponentWithCullingSettings* StaticClass();
}; // Size: 0x3f0
#pragma pack(pop)

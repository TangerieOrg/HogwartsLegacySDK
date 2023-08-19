#pragma once
#include <cstdint>
#include "FLightCullingPerLightSettings.hpp"
#include "UPointLightComponent.hpp"
#pragma pack(push, 1)
class UPointLightComponentWithCullingSettings : public UPointLightComponent {
public:
    FLightCullingPerLightSettings LightCullingSettings; // 0x3e0
    char pad_3e3[0xd];
    static UPointLightComponentWithCullingSettings* StaticClass();
}; // Size: 0x3f0
#pragma pack(pop)

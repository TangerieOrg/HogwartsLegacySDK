#pragma once
#include <cstdint>
#include "FLightCullingPerLightSettings.hpp"
#include "USpotLightComponent.hpp"
#pragma pack(push, 1)
class USpotLightComponentWithCullingSettings : public USpotLightComponent {
public:
    char pad_3e0[0x8];
    FLightCullingPerLightSettings LightCullingSettings; // 0x3e8
    char pad_3eb[0x5];
    static USpotLightComponentWithCullingSettings* StaticClass();
}; // Size: 0x3f0
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "ALight.hpp"
class USpotLightComponentWithCullingSettings;
#pragma pack(push, 1)
class ASpotLightWithCullingSettings : public ALight {
public:
    USpotLightComponentWithCullingSettings* SpotLightComponent; // 0x258
    static ASpotLightWithCullingSettings* StaticClass();
    void Copy();
}; // Size: 0x260
#pragma pack(pop)

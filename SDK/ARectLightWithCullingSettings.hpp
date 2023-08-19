#pragma once
#include <cstdint>
#include "ALight.hpp"
class URectLightComponentWithCullingSettings;
#pragma pack(push, 1)
class ARectLightWithCullingSettings : public ALight {
public:
    URectLightComponentWithCullingSettings* RectLightComponent; // 0x258
    static ARectLightWithCullingSettings* StaticClass();
    void Copy();
}; // Size: 0x260
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "ALight.hpp"
class URectLightComponent;
#pragma pack(push, 1)
class ARectLight : public ALight {
public:
    URectLightComponent* RectLightComponent; // 0x258
    static ARectLight* StaticClass();
}; // Size: 0x260
#pragma pack(pop)

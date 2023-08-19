#pragma once
#include <cstdint>
#include "ALight.hpp"
class UPointLightComponentWithCullingSettings;
#pragma pack(push, 1)
class APointLightWithCullingSettings : public ALight {
public:
    UPointLightComponentWithCullingSettings* PointLightComponent; // 0x258
    static APointLightWithCullingSettings* StaticClass();
    void Copy();
}; // Size: 0x260
#pragma pack(pop)

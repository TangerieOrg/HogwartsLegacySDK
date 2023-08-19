#pragma once
#include <cstdint>
#include "ALight.hpp"
class UPointLightComponent;
#pragma pack(push, 1)
class APointLight : public ALight {
public:
    UPointLightComponent* PointLightComponent; // 0x258
    static APointLight* StaticClass();
    void SetRadius(float NewRadius);
    void SetLightFalloffExponent(float NewLightFalloffExponent);
}; // Size: 0x260
#pragma pack(pop)

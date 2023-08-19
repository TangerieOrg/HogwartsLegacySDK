#pragma once
#include <cstdint>
#include "ALight.hpp"
class USpotLightComponent;
#pragma pack(push, 1)
class ASpotLight : public ALight {
public:
    USpotLightComponent* SpotLightComponent; // 0x258
    static ASpotLight* StaticClass();
    void SetOuterConeAngle(float NewOuterConeAngle);
    void SetInnerConeAngle(float NewInnerConeAngle);
}; // Size: 0x260
#pragma pack(pop)

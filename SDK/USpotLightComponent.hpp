#pragma once
#include <cstdint>
#include "UPointLightComponent.hpp"
#pragma pack(push, 1)
class USpotLightComponent : public UPointLightComponent {
public:
    static USpotLightComponent* StaticClass();
    void SetOuterConeAngle(float NewOuterConeAngle);
    void SetInnerConeAngle(float NewInnerConeAngle);
}; // Size: 0x3e0
#pragma pack(pop)

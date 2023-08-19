#pragma once
#include <cstdint>
#include "UDecalPointLightComponentBase.hpp"
#pragma pack(push, 1)
class UFadeToDecalPointLightComponent : public UDecalPointLightComponentBase {
public:
    static UFadeToDecalPointLightComponent* StaticClass();
    void SetUseLightVisibility(bool bNewUseLightVisibility);
    void SetLightParametersCanChange(bool bNewLightParametersCanChange);
}; // Size: 0x330
#pragma pack(pop)

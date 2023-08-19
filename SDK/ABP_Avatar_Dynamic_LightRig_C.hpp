#pragma once
#include <cstdint>
#include "ADynamicCharacterLightRig.hpp"
class UStaticMeshComponent;
class USpotLightComponent;
#pragma pack(push, 1)
class ABP_Avatar_Dynamic_LightRig_C : public ADynamicCharacterLightRig {
public:
    UStaticMeshComponent* DebugCenter; // 0x308
    USpotLightComponent* Camera_Variable_Fill_; // 0x310
    USpotLightComponent* Rim_2; // 0x318
    USpotLightComponent* Hair_light; // 0x320
    USpotLightComponent* Main_Rim; // 0x328
    static ABP_Avatar_Dynamic_LightRig_C* StaticClass();
}; // Size: 0x330
#pragma pack(pop)

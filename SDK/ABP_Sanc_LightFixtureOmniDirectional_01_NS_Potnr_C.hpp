#pragma once
#include <cstdint>
#include "AActor.hpp"
class UAnimatedLightComponent;
class UPointLightComponent;
class UMaterialBillboardComponent;
class UStaticMeshComponent;
class UBP_ID_OmniLight_Master_C;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Sanc_LightFixtureOmniDirectional_01_NS_Potnr_C : public AActor {
public:
    UAnimatedLightComponent* AnimatedLight; // 0x248
    UMaterialBillboardComponent* MaterialBillboard; // 0x250
    UPointLightComponent* PointLight; // 0x258
    UStaticMeshComponent* SM_HW_SD_Lamp_Wall_A; // 0x260
    UBP_ID_OmniLight_Master_C* BP_ID_OmniLight_Master; // 0x268
    USceneComponent* Scene; // 0x270
    static ABP_Sanc_LightFixtureOmniDirectional_01_NS_Potnr_C* StaticClass();
}; // Size: 0x278
#pragma pack(pop)

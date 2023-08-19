#pragma once
#include <cstdint>
#include "AActor.hpp"
class UAnimatedLightComponent;
class UPointLightComponent;
class UBP_ID_DownwardsDirectional_Master1_C;
class USpotLightComponent;
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Sanc_LightFixtureDownwardsDirectional_01_Potnr_C : public AActor {
public:
    UAnimatedLightComponent* AnimatedLight1; // 0x248
    UAnimatedLightComponent* AnimatedLight; // 0x250
    UBP_ID_DownwardsDirectional_Master1_C* BP_ID_DownwardsDirectional_Master3; // 0x258
    UPointLightComponent* PointLight1; // 0x260
    UBP_ID_DownwardsDirectional_Master1_C* BP_ID_DownwardsDirectional_Master2; // 0x268
    USpotLightComponent* SpotLight; // 0x270
    UStaticMeshComponent* Base; // 0x278
    USceneComponent* Scene; // 0x280
    bool Cast_Spotlight_shadows; // 0x288
    char pad_289[0x7];
    static ABP_Sanc_LightFixtureDownwardsDirectional_01_Potnr_C* StaticClass();
}; // Size: 0x290
#pragma pack(pop)

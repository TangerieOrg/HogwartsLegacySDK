#pragma once
#include <cstdint>
#include "AActor.hpp"
class UAnimatedLightComponent;
class UPointLightComponent;
class UBP_ID_OmniLight_Master_C;
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Sanc_LightFixtureOmniDirectional_01_Dwiz_C : public AActor {
public:
    UAnimatedLightComponent* AnimatedLight; // 0x248
    UBP_ID_OmniLight_Master_C* BP_ID_OmniLight_Master1; // 0x250
    UPointLightComponent* PointLight; // 0x258
    UStaticMeshComponent* Base; // 0x260
    USceneComponent* Scene; // 0x268
    static ABP_Sanc_LightFixtureOmniDirectional_01_Dwiz_C* StaticClass();
}; // Size: 0x270
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "AActor.hpp"
class UNiagaraComponent;
class UAnimatedLightComponent;
class USceneComponent;
class UPointLightComponent;
class UStaticMeshComponent;
#pragma pack(push, 1)
class ABP_Dungeonlantern_C : public AActor {
public:
    UNiagaraComponent* Niagara; // 0x248
    UAnimatedLightComponent* AnimatedLight; // 0x250
    UPointLightComponent* PointLight; // 0x258
    UStaticMeshComponent* SM_OVR_Chandelier_01_Glass; // 0x260
    UStaticMeshComponent* SM_OVR_Chandelier_01_Lantern; // 0x268
    USceneComponent* DefaultSceneRoot; // 0x270
    static ABP_Dungeonlantern_C* StaticClass();
}; // Size: 0x278
#pragma pack(pop)

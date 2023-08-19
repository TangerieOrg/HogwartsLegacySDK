#pragma once
#include <cstdint>
#include "AActor.hpp"
class UBP_Artificial_Light_Master_C;
class UPointLightComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Artificial_Bounce_Light_Point_C : public AActor {
public:
    UBP_Artificial_Light_Master_C* BP_Artificial_Light_Master; // 0x248
    UPointLightComponent* PointLight; // 0x250
    USceneComponent* DefaultSceneRoot; // 0x258
    static ABP_Artificial_Bounce_Light_Point_C* StaticClass();
}; // Size: 0x260
#pragma pack(pop)

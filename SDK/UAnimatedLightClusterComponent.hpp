#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
class UAnimatedLightsClusterSettings;
#pragma pack(push, 1)
class UAnimatedLightClusterComponent : public USceneComponent {
public:
    TArray<void*> LightComponents; // 0x220
    char pad_230[0x10];
    float MaxVisibleDistance; // 0x240
    float SleepDeltaTime; // 0x244
    bool bCanForceUpdates; // 0x248
    char pad_249[0x7];
    static UAnimatedLightClusterComponent* StaticClass();
    void RebuildLights();
}; // Size: 0x250
#pragma pack(pop)

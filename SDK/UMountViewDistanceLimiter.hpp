#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class UCameraHeightWithCullingRenderSettingsComponent;
#pragma pack(push, 1)
class UMountViewDistanceLimiter : public UActorComponent {
public:
    UCameraHeightWithCullingRenderSettingsComponent* CameraHeightRenderSettingsComponent; // 0xc8
    float MaxFogOnOffValue; // 0xd0
    float FogOnOffInterpSpeed; // 0xd4
    char pad_d8[0x20];
    static UMountViewDistanceLimiter* StaticClass();
}; // Size: 0xf8
#pragma pack(pop)

#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UWeatherExclusionComponent : public USceneComponent {
public:
    bool bHideCameraFX; // 0x220
    bool bHideSurfaceFX; // 0x221
    char pad_222[0x2];
    float Priority; // 0x224
    float BlendRadius; // 0x228
    float BlendWeight; // 0x22c
    bool bEnabled; // 0x230
    char pad_231[0xf];
    static UWeatherExclusionComponent* StaticClass();
    void SetPriority(float NewPriority);
}; // Size: 0x240
#pragma pack(pop)

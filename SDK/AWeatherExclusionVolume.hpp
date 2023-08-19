#pragma once
#include <cstdint>
#include "AVolume.hpp"
#pragma pack(push, 1)
class AWeatherExclusionVolume : public AVolume {
public:
    char pad_280[0x8];
    bool bHideCameraFX; // 0x288
    bool bHideSurfaceFX; // 0x289
    char pad_28a[0x2];
    float Priority; // 0x28c
    float BlendRadius; // 0x290
    float BlendWeight; // 0x294
    bool bEnabled; // 0x298
    char pad_299[0x7];
    static AWeatherExclusionVolume* StaticClass();
    void SetPriority(float NewPriority);
}; // Size: 0x2a0
#pragma pack(pop)

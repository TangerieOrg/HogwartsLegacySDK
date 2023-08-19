#pragma once
#include <cstdint>
#include "UWeatherOrphanComponent.hpp"
class UGlobalLightingBlendable;
#pragma pack(push, 1)
class UWeatherGlobalLightingBlendableOrphanComponent : public UWeatherOrphanComponent {
public:
    char pad_118[0x8];
    UGlobalLightingBlendable* Blendable; // 0x120
    float Priority; // 0x128
    char pad_12c[0x4];
    static UWeatherGlobalLightingBlendableOrphanComponent* StaticClass();
}; // Size: 0x130
#pragma pack(pop)

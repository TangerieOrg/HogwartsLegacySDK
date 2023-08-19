#pragma once
#include <cstdint>
#include "UDecalComponent.hpp"
class UMaterialInterface;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class USimpleBlobShadowDecalComponent : public UDecalComponent {
public:
    float MaxDrawDistance; // 0x310
    float InAirFadeDistanceStart; // 0x314
    float InAirFadeDistance; // 0x318
    float MinOpacityDistance; // 0x31c
    float MinOpacity; // 0x320
    float MaxOpacityDistance; // 0x324
    float MaxOpacity; // 0x328
    bool bUseBoundsCenter; // 0x32c
    char pad_32d[0x3];
    UMaterialInterface* DefaultDecalMaterial; // 0x330
    UMaterialInstanceDynamic* DecalMID; // 0x338
    bool bEnabled; // 0x340
    char pad_341[0xf];
    static USimpleBlobShadowDecalComponent* StaticClass();
}; // Size: 0x350
#pragma pack(pop)

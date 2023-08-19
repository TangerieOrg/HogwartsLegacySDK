#pragma once
#include <cstdint>
#include "FColor.hpp"
#include "UPrimitiveComponent.hpp"
class UTexture;
#pragma pack(push, 1)
class UDrawFrustumComponent : public UPrimitiveComponent {
public:
    FColor FrustumColor; // 0x480
    float FrustumAngle; // 0x484
    float FrustumAspectRatio; // 0x488
    float FrustumStartDist; // 0x48c
    float FrustumEndDist; // 0x490
    char pad_494[0x4];
    UTexture* Texture; // 0x498
    static UDrawFrustumComponent* StaticClass();
}; // Size: 0x4a0
#pragma pack(pop)

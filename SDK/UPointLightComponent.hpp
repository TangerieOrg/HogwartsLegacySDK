#pragma once
#include <cstdint>
#include "ULocalLightComponent.hpp"
#pragma pack(push, 1)
class UPointLightComponent : public ULocalLightComponent {
public:
    uint8_t bUseInverseSquaredFalloff : 1; // 0x3c0
    uint8_t bIsFakeWrapAmbient : 1; // 0x3c0
    uint8_t pad_bitfield_3c0_2 : 6;
    char pad_3c1[0x3];
    float LightFalloffExponent; // 0x3c4
    float SourceRadius; // 0x3c8
    float SoftSourceRadius; // 0x3cc
    float SourceLength; // 0x3d0
    char pad_3d4[0xc];
    static UPointLightComponent* StaticClass();
    void SetSourceRadius(float bNewValue);
    void SetSourceLength(float NewValue);
    void SetSoftSourceRadius(float bNewValue);
    void SetLightFalloffExponent(float NewLightFalloffExponent);
}; // Size: 0x3e0
#pragma pack(pop)

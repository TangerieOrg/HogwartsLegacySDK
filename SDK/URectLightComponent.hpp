#pragma once
#include <cstdint>
#include "ULocalLightComponent.hpp"
class UTexture;
#pragma pack(push, 1)
class URectLightComponent : public ULocalLightComponent {
public:
    float SourceWidth; // 0x3c0
    float SourceHeight; // 0x3c4
    float BarnDoorAngle; // 0x3c8
    float BarnDoorLength; // 0x3cc
    UTexture* SourceTexture; // 0x3d0
    char pad_3d8[0x8];
    static URectLightComponent* StaticClass();
    void SetSourceWidth(float bNewValue);
    void SetSourceTexture(UTexture* bNewValue);
    void SetSourceHeight(float NewValue);
    void SetBarnDoorLength(float NewValue);
    void SetBarnDoorAngle(float NewValue);
}; // Size: 0x3e0
#pragma pack(pop)

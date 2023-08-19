#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class USkyStateOverride;
#pragma pack(push, 1)
class USkyStateOverrideComponent : public UActorComponent {
public:
    char pad_c8[0x8];
    USkyStateOverride* SkyStateOverride; // 0xd0
    bool bEnabled; // 0xd8
    char pad_d9[0x3];
    float ComponentLerpAlpha; // 0xdc
    static USkyStateOverrideComponent* StaticClass();
    void Valid(bool& bValid);
    void SetLerpAlpha(float LerpAlpha);
    void SetEnabled(bool bEnable);
    void IsEnabled(bool& bEnable);
    void HasLerpAlpha(bool& bHasLerpAlpha);
    void GetLerpAlpha(float& LerpAlpha);
    void DisableLerpAlpha();
    void CanUseLerpAlpha(bool& bUseLerpAlpha);
}; // Size: 0xe0
#pragma pack(pop)

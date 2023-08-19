#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "USceneComponent.hpp"
class UMaterialInterface;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UDecalComponent : public USceneComponent {
public:
    int32_t SortOrder; // 0x220
    float MinDrawDistance; // 0x224
    float FadeScreenSize; // 0x228
    float FadeStartDelay; // 0x22c
    float FadeDuration; // 0x230
    float FadeInDuration; // 0x234
    float FadeInStartDelay; // 0x238
    char pad_23c[0xa4];
    uint8_t bDestroyOwnerAfterFade : 1; // 0x2e0
    uint8_t pad_bitfield_2e0_1 : 7;
    char pad_2e1[0x3];
    FVector DecalSize; // 0x2e4
    bool bUsesWeatherDecal; // 0x2f0
    bool bRenderAfterWeather; // 0x2f1
    char pad_2f2[0x1e];
    static UDecalComponent* StaticClass();
    void SetSortOrder(int32_t Value);
    void SetMinDrawDistance(float NewMinDrawDistance);
    void SetFadeScreenSize(float NewFadeScreenSize);
    void SetFadeOut(float StartDelay, float Duration, bool DestroyOwnerAfterFade);
    void SetFadeIn(float StartDelay, float Duaration);
    void SetDecalMaterial(UMaterialInterface* NewDecalMaterial);
    float GetMinDrawDistance();
    float GetFadeStartDelay();
    float GetFadeInStartDelay();
    float GetFadeInDuration();
    float GetFadeDuration();
    UMaterialInterface* GetDecalMaterial();
    UMaterialInstanceDynamic* CreateDynamicMaterialInstance();
}; // Size: 0x310
#pragma pack(pop)

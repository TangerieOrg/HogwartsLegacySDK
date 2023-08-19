#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
class ULightComponent;
class UMaterialInterface;
#pragma pack(push, 1)
class ALight : public AActor {
public:
    ULightComponent* LightComponent; // 0x248
    uint8_t bEnabled : 1; // 0x250
    uint8_t pad_bitfield_250_1 : 7;
    char pad_251[0x7];
    static ALight* StaticClass();
    void ToggleEnabled();
    void SetLightFunctionScale(FVector NewLightFunctionScale);
    void SetLightFunctionMaterial(UMaterialInterface* NewLightFunctionMaterial);
    void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);
    void SetLightColor(FLinearColor NewLightColor);
    void SetEnabled(bool bSetEnabled);
    void SetCastShadows(bool bNewValue);
    void SetBrightness(float NewBrightness);
    void SetAffectTranslucentLighting(bool bNewValue);
    void OnRep_bEnabled();
    bool IsEnabled();
    FLinearColor GetLightColor();
    float GetBrightness();
}; // Size: 0x258
#pragma pack(pop)

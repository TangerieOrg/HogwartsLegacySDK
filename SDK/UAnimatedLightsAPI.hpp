#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class ULightComponent;
#pragma pack(push, 1)
class UAnimatedLightsAPI : public UBlueprintFunctionLibrary {
public:
    static UAnimatedLightsAPI* StaticClass();
    static bool SetAnimatedLightIntensity(ULightComponent* Light, float Intensity, bool bSetEvenIfNotAnimated);
    static bool SetAnimatedLightColorIntensity(ULightComponent* Light, FLinearColor Color, float Intensity, bool bSetEvenIfNotAnimated);
    static bool SetAnimatedLightColor(ULightComponent* Light, FLinearColor Color, bool bSetEvenIfNotAnimated);
    static void IsAnimatedLight(ULightComponent* Light, bool& bIsAnimatedLight);
    static bool GetAnimatedLightIntensity(ULightComponent* Light, float& Intensity, bool bGetEvenIfNotAnimated);
    static bool GetAnimatedLightColorIntensity(ULightComponent* Light, FLinearColor& Color, float& Intensity, bool bGetEvenIfNotAnimated);
    static bool GetAnimatedLightColor(ULightComponent* Light, FLinearColor& Color, bool bGetEvenIfNotAnimated);
}; // Size: 0x28
#pragma pack(pop)

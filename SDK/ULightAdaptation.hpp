#pragma once
#include <cstdint>
#include "FDynamicLightAdaptationSettings.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class ULightComponent;
class ULightAdaptationComponentChildOfLight;
class UObject;
struct FEmissiveAdaptationFinalState;
#pragma pack(push, 1)
class ULightAdaptation : public UBlueprintFunctionLibrary {
public:
    static ULightAdaptation* StaticClass();
    static void LightAdaptationSetIntensity(ULightComponent* LightComponent, float Intensity);
    static void LightAdaptationRegisterWithIntensity(ULightComponent* LightComponent, FDynamicLightAdaptationSettings Settings, float Intensity, ULightAdaptationComponentChildOfLight*& AdaptationComponent);
    static void LightAdaptationRegister(ULightComponent* LightComponent, FDynamicLightAdaptationSettings Settings, ULightAdaptationComponentChildOfLight*& AdaptationComponent);
    static void LightAdaptationIntensityFactor(UObject* WorldContextObject, FDynamicLightAdaptationSettings Settings, float& IntensityFactor);
    static void LightAdaptationGetIntensity(ULightComponent* LightComponent, float& Intensity);
    static void LightAdaptationDeregister(ULightAdaptationComponentChildOfLight* AdaptationComponent, bool bRestoreIntensity);
    static void GetLightAdaptationState(UObject* WorldContextObject, FEmissiveAdaptationFinalState& State);
}; // Size: 0x28
#pragma pack(pop)

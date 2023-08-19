#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
struct FEmissiveAdaptationFinalState;
#pragma pack(push, 1)
class UEmissiveAdaptationBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UEmissiveAdaptationBlueprintLibrary* StaticClass();
    static void UnrealToEV100(float UnrealExposure, float& EV100Exposure);
    static void GetEmissiveAdaptationState(UObject* WorldContextObject, FEmissiveAdaptationFinalState& State);
    static void GetEmissiveAdaptationOutdoorsDayTime(UObject* WorldContextObject, float& OutdoorsDayTime);
    static void GetEmissiveAdaptationMinMaxExposureEV100(UObject* WorldContextObject, float& MinExposureEV100, float& MaxExposureEV100, float& BiasPow2);
    static void GetEmissiveAdaptationMinMaxExposure(UObject* WorldContextObject, float& MinExposure, float& MaxExposure, float& Bias);
    static void GetEmissiveAdaptationFinalMultiplierClamped(UObject* WorldContextObject, float& FinalMultiplierClamped);
    static void GetEmissiveAdaptationFinalMultiplier(UObject* WorldContextObject, float& FinalMultiplier, float& FactorMin, float& FactorMax);
    static void EV100ToUnreal(float EV100Exposure, float& UnrealExposure);
    static void BiasFactorToEV100(float Factor, float& EV00Bias);
    static void BiasFactor(float EV00Bias, float& Factor);
}; // Size: 0x28
#pragma pack(pop)

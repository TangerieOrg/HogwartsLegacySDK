#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UNiagaraComponent;
class UObject;
#pragma pack(push, 1)
class UFL_VFX_WaterFX_C : public UBlueprintFunctionLibrary {
public:
    static UFL_VFX_WaterFX_C* StaticClass();
    static void Stream_Splash_01Params(UNiagaraComponent* VFX_NS_StreamSplash01, float EmissionRateScale, FVector EmissionVolume, float LifetimeScale, float MistOpacity, float SplashAngleScale, float SystemIntensity, float SystemOpacity, float SystemScale, float VelocityGravityScale, float VelocityScale, bool UseMist, bool UseSplashes, bool Activate, bool Deactivate, UObject* __WorldContext);
    static void WaterFall_RockHitParams(UNiagaraComponent* WaterFall_RockHit, float EmissionRateDroplets, float EmissionRateScale, FVector EmissionVolume, float LifetimeScale, float SystemIntensity, float SystemOpacity, float SystemScale, float VelocityScale, bool Activate, bool Deactivate, UObject* __WorldContext);
    static void Drips_1Params(UNiagaraComponent* VFX_NS_Drips_1, float EmissionRateScale, FVector EmissionVolume, float DripVelocity, float SystemIntensity, float SystemOpacity, float SystemScale, float DistanceDrips, bool UseDrips, bool UseSplashes, bool UseRipples, bool UseDebugPlane, bool Activate, bool Deactivate, UObject* __WorldContext);
    static void Whirlpool_01Params(UNiagaraComponent* VFX_NS_Whirlpool01, FLinearColor Color, float EmissionRadius, float EmissionRateScale, float RiseVelocityScale, float OpacitySpray, float SystemIntensity, float SystemOpacity, float SystemScale, float SurfaceOffset, bool UseDynamicSurface, bool Activate, bool Deactivate, UObject* __WorldContext);
}; // Size: 0x28
#pragma pack(pop)

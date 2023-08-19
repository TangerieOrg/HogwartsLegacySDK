#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFL_VFX_WaterFX_C.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UObject.hpp"
void UFL_VFX_WaterFX_C::Whirlpool_01Params(UNiagaraComponent* VFX_NS_Whirlpool01, FLinearColor Color, float EmissionRadius, float EmissionRateScale, float RiseVelocityScale, float OpacitySpray, float SystemIntensity, float SystemOpacity, float SystemScale, float SurfaceOffset, bool UseDynamicSurface, bool Activate, bool Deactivate, UObject* __WorldContext) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/FunctionLibrary/FL_VFX_WaterFX.FL_VFX_WaterFX_C.Whirlpool 01Params"));
    struct Params_Whirlpool_01Params {
        UNiagaraComponent* VFX_NS_Whirlpool01; // 0x0
        FLinearColor Color; // 0x8
        float EmissionRadius; // 0x18
        float EmissionRateScale; // 0x1c
        float RiseVelocityScale; // 0x20
        float OpacitySpray; // 0x24
        float SystemIntensity; // 0x28
        float SystemOpacity; // 0x2c
        float SystemScale; // 0x30
        float SurfaceOffset; // 0x34
        bool UseDynamicSurface; // 0x38
        bool Activate; // 0x39
        bool Deactivate; // 0x3a
        char pad_3b[0x5];
        UObject* __WorldContext; // 0x40
    }; // Size: 0x48
    Params_Whirlpool_01Params params{};
    params.VFX_NS_Whirlpool01 = (UNiagaraComponent*)VFX_NS_Whirlpool01;
    params.Color = (FLinearColor)Color;
    params.EmissionRadius = (float)EmissionRadius;
    params.EmissionRateScale = (float)EmissionRateScale;
    params.RiseVelocityScale = (float)RiseVelocityScale;
    params.OpacitySpray = (float)OpacitySpray;
    params.SystemIntensity = (float)SystemIntensity;
    params.SystemOpacity = (float)SystemOpacity;
    params.SystemScale = (float)SystemScale;
    params.SurfaceOffset = (float)SurfaceOffset;
    params.UseDynamicSurface = (bool)UseDynamicSurface;
    params.Activate = (bool)Activate;
    params.Deactivate = (bool)Deactivate;
    params.__WorldContext = (UObject*)__WorldContext;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UFL_VFX_WaterFX_C* UFL_VFX_WaterFX_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/FunctionLibrary/FL_VFX_WaterFX.FL_VFX_WaterFX_C");
    return (UFL_VFX_WaterFX_C*)res;
}
void UFL_VFX_WaterFX_C::Drips_1Params(UNiagaraComponent* VFX_NS_Drips_1, float EmissionRateScale, FVector EmissionVolume, float DripVelocity, float SystemIntensity, float SystemOpacity, float SystemScale, float DistanceDrips, bool UseDrips, bool UseSplashes, bool UseRipples, bool UseDebugPlane, bool Activate, bool Deactivate, UObject* __WorldContext) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/FunctionLibrary/FL_VFX_WaterFX.FL_VFX_WaterFX_C.Drips_1Params"));
    struct Params_Drips_1Params {
        UNiagaraComponent* VFX_NS_Drips_1; // 0x0
        float EmissionRateScale; // 0x8
        FVector EmissionVolume; // 0xc
        float DripVelocity; // 0x18
        float SystemIntensity; // 0x1c
        float SystemOpacity; // 0x20
        float SystemScale; // 0x24
        float DistanceDrips; // 0x28
        bool UseDrips; // 0x2c
        bool UseSplashes; // 0x2d
        bool UseRipples; // 0x2e
        bool UseDebugPlane; // 0x2f
        bool Activate; // 0x30
        bool Deactivate; // 0x31
        char pad_32[0x6];
        UObject* __WorldContext; // 0x38
    }; // Size: 0x40
    Params_Drips_1Params params{};
    params.VFX_NS_Drips_1 = (UNiagaraComponent*)VFX_NS_Drips_1;
    params.EmissionRateScale = (float)EmissionRateScale;
    params.EmissionVolume = (FVector)EmissionVolume;
    params.DripVelocity = (float)DripVelocity;
    params.SystemIntensity = (float)SystemIntensity;
    params.SystemOpacity = (float)SystemOpacity;
    params.SystemScale = (float)SystemScale;
    params.DistanceDrips = (float)DistanceDrips;
    params.UseDrips = (bool)UseDrips;
    params.UseSplashes = (bool)UseSplashes;
    params.UseRipples = (bool)UseRipples;
    params.UseDebugPlane = (bool)UseDebugPlane;
    params.Activate = (bool)Activate;
    params.Deactivate = (bool)Deactivate;
    params.__WorldContext = (UObject*)__WorldContext;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UFL_VFX_WaterFX_C::Stream_Splash_01Params(UNiagaraComponent* VFX_NS_StreamSplash01, float EmissionRateScale, FVector EmissionVolume, float LifetimeScale, float MistOpacity, float SplashAngleScale, float SystemIntensity, float SystemOpacity, float SystemScale, float VelocityGravityScale, float VelocityScale, bool UseMist, bool UseSplashes, bool Activate, bool Deactivate, UObject* __WorldContext) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/FunctionLibrary/FL_VFX_WaterFX.FL_VFX_WaterFX_C.Stream Splash 01Params"));
    struct Params_Stream_Splash_01Params {
        UNiagaraComponent* VFX_NS_StreamSplash01; // 0x0
        float EmissionRateScale; // 0x8
        FVector EmissionVolume; // 0xc
        float LifetimeScale; // 0x18
        float MistOpacity; // 0x1c
        float SplashAngleScale; // 0x20
        float SystemIntensity; // 0x24
        float SystemOpacity; // 0x28
        float SystemScale; // 0x2c
        float VelocityGravityScale; // 0x30
        float VelocityScale; // 0x34
        bool UseMist; // 0x38
        bool UseSplashes; // 0x39
        bool Activate; // 0x3a
        bool Deactivate; // 0x3b
        char pad_3c[0x4];
        UObject* __WorldContext; // 0x40
    }; // Size: 0x48
    Params_Stream_Splash_01Params params{};
    params.VFX_NS_StreamSplash01 = (UNiagaraComponent*)VFX_NS_StreamSplash01;
    params.EmissionRateScale = (float)EmissionRateScale;
    params.EmissionVolume = (FVector)EmissionVolume;
    params.LifetimeScale = (float)LifetimeScale;
    params.MistOpacity = (float)MistOpacity;
    params.SplashAngleScale = (float)SplashAngleScale;
    params.SystemIntensity = (float)SystemIntensity;
    params.SystemOpacity = (float)SystemOpacity;
    params.SystemScale = (float)SystemScale;
    params.VelocityGravityScale = (float)VelocityGravityScale;
    params.VelocityScale = (float)VelocityScale;
    params.UseMist = (bool)UseMist;
    params.UseSplashes = (bool)UseSplashes;
    params.Activate = (bool)Activate;
    params.Deactivate = (bool)Deactivate;
    params.__WorldContext = (UObject*)__WorldContext;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UFL_VFX_WaterFX_C::WaterFall_RockHitParams(UNiagaraComponent* WaterFall_RockHit, float EmissionRateDroplets, float EmissionRateScale, FVector EmissionVolume, float LifetimeScale, float SystemIntensity, float SystemOpacity, float SystemScale, float VelocityScale, bool Activate, bool Deactivate, UObject* __WorldContext) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/FunctionLibrary/FL_VFX_WaterFX.FL_VFX_WaterFX_C.WaterFall_RockHitParams"));
    struct Params_WaterFall_RockHitParams {
        UNiagaraComponent* WaterFall_RockHit; // 0x0
        float EmissionRateDroplets; // 0x8
        float EmissionRateScale; // 0xc
        FVector EmissionVolume; // 0x10
        float LifetimeScale; // 0x1c
        float SystemIntensity; // 0x20
        float SystemOpacity; // 0x24
        float SystemScale; // 0x28
        float VelocityScale; // 0x2c
        bool Activate; // 0x30
        bool Deactivate; // 0x31
        char pad_32[0x6];
        UObject* __WorldContext; // 0x38
    }; // Size: 0x40
    Params_WaterFall_RockHitParams params{};
    params.WaterFall_RockHit = (UNiagaraComponent*)WaterFall_RockHit;
    params.EmissionRateDroplets = (float)EmissionRateDroplets;
    params.EmissionRateScale = (float)EmissionRateScale;
    params.EmissionVolume = (FVector)EmissionVolume;
    params.LifetimeScale = (float)LifetimeScale;
    params.SystemIntensity = (float)SystemIntensity;
    params.SystemOpacity = (float)SystemOpacity;
    params.SystemScale = (float)SystemScale;
    params.VelocityScale = (float)VelocityScale;
    params.Activate = (bool)Activate;
    params.Deactivate = (bool)Deactivate;
    params.__WorldContext = (UObject*)__WorldContext;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}

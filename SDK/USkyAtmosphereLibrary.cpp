#include "ESkyAtmosphereDirectionalLight.hpp"
#include "FGlobalLightingGenerateSunColorCurve.hpp"
#include "FGlobalLightingSunColorParams.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UCurveLinearColor.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USkyAtmosphereLibrary.hpp"
bool USkyAtmosphereLibrary::GetSunBaseColor(UObject* WorldContextObject, FLinearColor& BaseSunColor, ESkyAtmosphereDirectionalLight DirectionalLight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.SkyAtmosphereLibrary.GetSunBaseColor"));
    struct Params_GetSunBaseColor {
        UObject* WorldContextObject; // 0x0
        FLinearColor BaseSunColor; // 0x8
        ESkyAtmosphereDirectionalLight DirectionalLight; // 0x18
        bool ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_GetSunBaseColor params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.BaseSunColor = (FLinearColor)BaseSunColor;
    params.DirectionalLight = (ESkyAtmosphereDirectionalLight)DirectionalLight;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    BaseSunColor = params.BaseSunColor;
    return (bool)params.ReturnValue;
}
bool USkyAtmosphereLibrary::GetSunColorFromDirection(UObject* WorldContextObject, FVector SunDirection, FLinearColor& SunColor, ESkyAtmosphereDirectionalLight DirectionalLight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.SkyAtmosphereLibrary.GetSunColorFromDirection"));
    struct Params_GetSunColorFromDirection {
        UObject* WorldContextObject; // 0x0
        FVector SunDirection; // 0x8
        FLinearColor SunColor; // 0x14
        ESkyAtmosphereDirectionalLight DirectionalLight; // 0x24
        bool ReturnValue; // 0x25
    }; // Size: 0x26
    Params_GetSunColorFromDirection params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SunDirection = (FVector)SunDirection;
    params.SunColor = (FLinearColor)SunColor;
    params.DirectionalLight = (ESkyAtmosphereDirectionalLight)DirectionalLight;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SunColor = params.SunColor;
    return (bool)params.ReturnValue;
}
USkyAtmosphereLibrary* USkyAtmosphereLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.SkyAtmosphereLibrary");
    return (USkyAtmosphereLibrary*)res;
}
bool USkyAtmosphereLibrary::GetSunZenithLuminance(UObject* WorldContextObject, float& Luminance, ESkyAtmosphereDirectionalLight DirectionalLight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.SkyAtmosphereLibrary.GetSunZenithLuminance"));
    struct Params_GetSunZenithLuminance {
        UObject* WorldContextObject; // 0x0
        float Luminance; // 0x8
        ESkyAtmosphereDirectionalLight DirectionalLight; // 0xc
        bool ReturnValue; // 0xd
    }; // Size: 0xe
    Params_GetSunZenithLuminance params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Luminance = (float)Luminance;
    params.DirectionalLight = (ESkyAtmosphereDirectionalLight)DirectionalLight;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Luminance = params.Luminance;
    return (bool)params.ReturnValue;
}
bool USkyAtmosphereLibrary::GetSunLuminanceFromDirection(UObject* WorldContextObject, FVector SunDirection, float& Luminance, ESkyAtmosphereDirectionalLight DirectionalLight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.SkyAtmosphereLibrary.GetSunLuminanceFromDirection"));
    struct Params_GetSunLuminanceFromDirection {
        UObject* WorldContextObject; // 0x0
        FVector SunDirection; // 0x8
        float Luminance; // 0x14
        ESkyAtmosphereDirectionalLight DirectionalLight; // 0x18
        bool ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_GetSunLuminanceFromDirection params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SunDirection = (FVector)SunDirection;
    params.Luminance = (float)Luminance;
    params.DirectionalLight = (ESkyAtmosphereDirectionalLight)DirectionalLight;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Luminance = params.Luminance;
    return (bool)params.ReturnValue;
}
bool USkyAtmosphereLibrary::GetSunZenithColor(UObject* WorldContextObject, FLinearColor& SunColor, ESkyAtmosphereDirectionalLight DirectionalLight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.SkyAtmosphereLibrary.GetSunZenithColor"));
    struct Params_GetSunZenithColor {
        UObject* WorldContextObject; // 0x0
        FLinearColor SunColor; // 0x8
        ESkyAtmosphereDirectionalLight DirectionalLight; // 0x18
        bool ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_GetSunZenithColor params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.SunColor = (FLinearColor)SunColor;
    params.DirectionalLight = (ESkyAtmosphereDirectionalLight)DirectionalLight;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SunColor = params.SunColor;
    return (bool)params.ReturnValue;
}
bool USkyAtmosphereLibrary::GetSunLuminance(UObject* WorldContextObject, FGlobalLightingSunColorParams Params, float SunAngle, float& Luminance, ESkyAtmosphereDirectionalLight DirectionalLight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.SkyAtmosphereLibrary.GetSunLuminance"));
    struct Params_GetSunLuminance {
        UObject* WorldContextObject; // 0x0
        FGlobalLightingSunColorParams Params; // 0x8
        float SunAngle; // 0x2c
        float Luminance; // 0x30
        ESkyAtmosphereDirectionalLight DirectionalLight; // 0x34
        bool ReturnValue; // 0x35
    }; // Size: 0x36
    Params_GetSunLuminance params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Params = (FGlobalLightingSunColorParams)Params;
    params.SunAngle = (float)SunAngle;
    params.Luminance = (float)Luminance;
    params.DirectionalLight = (ESkyAtmosphereDirectionalLight)DirectionalLight;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Luminance = params.Luminance;
    return (bool)params.ReturnValue;
}
bool USkyAtmosphereLibrary::GetSunColor(UObject* WorldContextObject, FGlobalLightingSunColorParams Params, float SunAngle, FLinearColor& SunColor, ESkyAtmosphereDirectionalLight DirectionalLight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.SkyAtmosphereLibrary.GetSunColor"));
    struct Params_GetSunColor {
        UObject* WorldContextObject; // 0x0
        FGlobalLightingSunColorParams Params; // 0x8
        float SunAngle; // 0x2c
        FLinearColor SunColor; // 0x30
        ESkyAtmosphereDirectionalLight DirectionalLight; // 0x40
        bool ReturnValue; // 0x41
    }; // Size: 0x42
    Params_GetSunColor params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Params = (FGlobalLightingSunColorParams)Params;
    params.SunAngle = (float)SunAngle;
    params.SunColor = (FLinearColor)SunColor;
    params.DirectionalLight = (ESkyAtmosphereDirectionalLight)DirectionalLight;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SunColor = params.SunColor;
    return (bool)params.ReturnValue;
}
bool USkyAtmosphereLibrary::GenerateSunColorCurve(UObject* WorldContextObject, FGlobalLightingGenerateSunColorCurve CurveParams, UCurveLinearColor* SunColorCurve, ESkyAtmosphereDirectionalLight DirectionalLight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.SkyAtmosphereLibrary.GenerateSunColorCurve"));
    struct Params_GenerateSunColorCurve {
        UObject* WorldContextObject; // 0x0
        FGlobalLightingGenerateSunColorCurve CurveParams; // 0x8
        UCurveLinearColor* SunColorCurve; // 0x40
        ESkyAtmosphereDirectionalLight DirectionalLight; // 0x48
        bool ReturnValue; // 0x49
    }; // Size: 0x4a
    Params_GenerateSunColorCurve params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.CurveParams = (FGlobalLightingGenerateSunColorCurve)CurveParams;
    params.SunColorCurve = (UCurveLinearColor*)SunColorCurve;
    params.DirectionalLight = (ESkyAtmosphereDirectionalLight)DirectionalLight;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}

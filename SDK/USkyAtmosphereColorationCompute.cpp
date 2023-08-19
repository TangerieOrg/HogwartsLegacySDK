#include "ESkyAtmosphereColorationComputeOutput.hpp"
#include "ESkyAtmosphereColorationComputeType.hpp"
#include "FDayNightLightSkyAtmosphereComputeDirLight.hpp"
#include "FDayNightLightSkyAtmosphereComputeParams.hpp"
#include "FDayNightLightSkyAtmosphereComputeSampleDirectionParams.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPrimitiveComponent.hpp"
#include "USkyAtmosphereColorationCompute.hpp"
void USkyAtmosphereColorationCompute::SkyColorsLit(UObject* WorldContextObject, FDayNightLightSkyAtmosphereComputeParams Params, TArray<FVector>& Directions, TArray<FLinearColor>& SkyColors, TArray<float>& SkyIntensites) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyAtmosphereColorationCompute.SkyColorsLit"));
    struct Params_SkyColorsLit {
        UObject* WorldContextObject; // 0x0
        FDayNightLightSkyAtmosphereComputeParams Params; // 0x8
        TArray<FVector> Directions; // 0x80
        TArray<FLinearColor> SkyColors; // 0x90
        TArray<float> SkyIntensites; // 0xa0
    }; // Size: 0xb0
    Params_SkyColorsLit params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Params = (FDayNightLightSkyAtmosphereComputeParams)Params;
    params.Directions = (TArray<FVector>)Directions;
    params.SkyColors = (TArray<FLinearColor>)SkyColors;
    params.SkyIntensites = (TArray<float>)SkyIntensites;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Directions = params.Directions;
    SkyColors = params.SkyColors;
    SkyIntensites = params.SkyIntensites;
}
void USkyAtmosphereColorationCompute::SkyDirectionalInfo(UObject* WorldContextObject, FDayNightLightSkyAtmosphereComputeParams Params, FDayNightLightSkyAtmosphereComputeDirLight& DirectionalLightInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyAtmosphereColorationCompute.SkyDirectionalInfo"));
    struct Params_SkyDirectionalInfo {
        UObject* WorldContextObject; // 0x0
        FDayNightLightSkyAtmosphereComputeParams Params; // 0x8
        FDayNightLightSkyAtmosphereComputeDirLight DirectionalLightInfo; // 0x80
    }; // Size: 0xcc
    Params_SkyDirectionalInfo params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Params = (FDayNightLightSkyAtmosphereComputeParams)Params;
    params.DirectionalLightInfo = (FDayNightLightSkyAtmosphereComputeDirLight)DirectionalLightInfo;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    DirectionalLightInfo = params.DirectionalLightInfo;
}
USkyAtmosphereColorationCompute* USkyAtmosphereColorationCompute::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.SkyAtmosphereColorationCompute");
    return (USkyAtmosphereColorationCompute*)res;
}
void USkyAtmosphereColorationCompute::SkySunInfo(UObject* WorldContextObject, FDayNightLightSkyAtmosphereComputeParams Params, FDayNightLightSkyAtmosphereComputeDirLight& SunInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyAtmosphereColorationCompute.SkySunInfo"));
    struct Params_SkySunInfo {
        UObject* WorldContextObject; // 0x0
        FDayNightLightSkyAtmosphereComputeParams Params; // 0x8
        FDayNightLightSkyAtmosphereComputeDirLight SunInfo; // 0x80
    }; // Size: 0xcc
    Params_SkySunInfo params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Params = (FDayNightLightSkyAtmosphereComputeParams)Params;
    params.SunInfo = (FDayNightLightSkyAtmosphereComputeDirLight)SunInfo;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SunInfo = params.SunInfo;
}
void USkyAtmosphereColorationCompute::SetupDebugPrimitive(UPrimitiveComponent* Component, bool bIsSelectable, bool bShowInReflections) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyAtmosphereColorationCompute.SetupDebugPrimitive"));
    struct Params_SetupDebugPrimitive {
        UPrimitiveComponent* Component; // 0x0
        bool bIsSelectable; // 0x8
        bool bShowInReflections; // 0x9
    }; // Size: 0xa
    Params_SetupDebugPrimitive params{};
    params.Component = (UPrimitiveComponent*)Component;
    params.bIsSelectable = (bool)bIsSelectable;
    params.bShowInReflections = (bool)bShowInReflections;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void USkyAtmosphereColorationCompute::SkyMoonInfo(UObject* WorldContextObject, FDayNightLightSkyAtmosphereComputeParams Params, FDayNightLightSkyAtmosphereComputeDirLight& MoonInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyAtmosphereColorationCompute.SkyMoonInfo"));
    struct Params_SkyMoonInfo {
        UObject* WorldContextObject; // 0x0
        FDayNightLightSkyAtmosphereComputeParams Params; // 0x8
        FDayNightLightSkyAtmosphereComputeDirLight MoonInfo; // 0x80
    }; // Size: 0xcc
    Params_SkyMoonInfo params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Params = (FDayNightLightSkyAtmosphereComputeParams)Params;
    params.MoonInfo = (FDayNightLightSkyAtmosphereComputeDirLight)MoonInfo;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MoonInfo = params.MoonInfo;
}
void USkyAtmosphereColorationCompute::SkyColorsLitPacked(UObject* WorldContextObject, FDayNightLightSkyAtmosphereComputeParams Params, TArray<FVector>& Directions, TArray<FLinearColor>& SkyColorsRGBIntensityAs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyAtmosphereColorationCompute.SkyColorsLitPacked"));
    struct Params_SkyColorsLitPacked {
        UObject* WorldContextObject; // 0x0
        FDayNightLightSkyAtmosphereComputeParams Params; // 0x8
        TArray<FVector> Directions; // 0x80
        TArray<FLinearColor> SkyColorsRGBIntensityAs; // 0x90
    }; // Size: 0xa0
    Params_SkyColorsLitPacked params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Params = (FDayNightLightSkyAtmosphereComputeParams)Params;
    params.Directions = (TArray<FVector>)Directions;
    params.SkyColorsRGBIntensityAs = (TArray<FLinearColor>)SkyColorsRGBIntensityAs;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Directions = params.Directions;
    SkyColorsRGBIntensityAs = params.SkyColorsRGBIntensityAs;
}
void USkyAtmosphereColorationCompute::SkyColorsLitCompute(UObject* WorldContextObject, FDayNightLightSkyAtmosphereComputeParams Params, TArray<FVector>& Directions, TArray<FLinearColor>& SkyColors, ESkyAtmosphereColorationComputeType ComputeType, ESkyAtmosphereColorationComputeOutput OutputType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyAtmosphereColorationCompute.SkyColorsLitCompute"));
    struct Params_SkyColorsLitCompute {
        UObject* WorldContextObject; // 0x0
        FDayNightLightSkyAtmosphereComputeParams Params; // 0x8
        TArray<FVector> Directions; // 0x80
        TArray<FLinearColor> SkyColors; // 0x90
        ESkyAtmosphereColorationComputeType ComputeType; // 0xa0
        ESkyAtmosphereColorationComputeOutput OutputType; // 0xa1
    }; // Size: 0xa2
    Params_SkyColorsLitCompute params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Params = (FDayNightLightSkyAtmosphereComputeParams)Params;
    params.Directions = (TArray<FVector>)Directions;
    params.SkyColors = (TArray<FLinearColor>)SkyColors;
    params.ComputeType = (ESkyAtmosphereColorationComputeType)ComputeType;
    params.OutputType = (ESkyAtmosphereColorationComputeOutput)OutputType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Directions = params.Directions;
    SkyColors = params.SkyColors;
}
void USkyAtmosphereColorationCompute::SkyColorsLitComposited(UObject* WorldContextObject, FDayNightLightSkyAtmosphereComputeParams Params, TArray<FVector>& Directions, TArray<FLinearColor>& SkyColors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyAtmosphereColorationCompute.SkyColorsLitComposited"));
    struct Params_SkyColorsLitComposited {
        UObject* WorldContextObject; // 0x0
        FDayNightLightSkyAtmosphereComputeParams Params; // 0x8
        TArray<FVector> Directions; // 0x80
        TArray<FLinearColor> SkyColors; // 0x90
    }; // Size: 0xa0
    Params_SkyColorsLitComposited params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Params = (FDayNightLightSkyAtmosphereComputeParams)Params;
    params.Directions = (TArray<FVector>)Directions;
    params.SkyColors = (TArray<FLinearColor>)SkyColors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Directions = params.Directions;
    SkyColors = params.SkyColors;
}
void USkyAtmosphereColorationCompute::SkyColorSamplingDirection(FDayNightLightSkyAtmosphereComputeSampleDirectionParams DirectionParams, FVector Direction, FVector& SamplingDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyAtmosphereColorationCompute.SkyColorSamplingDirection"));
    struct Params_SkyColorSamplingDirection {
        FDayNightLightSkyAtmosphereComputeSampleDirectionParams DirectionParams; // 0x0
        FVector Direction; // 0x10
        FVector SamplingDirection; // 0x1c
    }; // Size: 0x28
    Params_SkyColorSamplingDirection params{};
    params.DirectionParams = (FDayNightLightSkyAtmosphereComputeSampleDirectionParams)DirectionParams;
    params.Direction = (FVector)Direction;
    params.SamplingDirection = (FVector)SamplingDirection;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SamplingDirection = params.SamplingDirection;
}
void USkyAtmosphereColorationCompute::SkyColorLitCompute(UObject* WorldContextObject, FDayNightLightSkyAtmosphereComputeParams Params, FVector Direction, FLinearColor& SkyColor, ESkyAtmosphereColorationComputeType ComputeType, ESkyAtmosphereColorationComputeOutput OutputType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyAtmosphereColorationCompute.SkyColorLitCompute"));
    struct Params_SkyColorLitCompute {
        UObject* WorldContextObject; // 0x0
        FDayNightLightSkyAtmosphereComputeParams Params; // 0x8
        FVector Direction; // 0x80
        FLinearColor SkyColor; // 0x8c
        ESkyAtmosphereColorationComputeType ComputeType; // 0x9c
        ESkyAtmosphereColorationComputeOutput OutputType; // 0x9d
    }; // Size: 0x9e
    Params_SkyColorLitCompute params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Params = (FDayNightLightSkyAtmosphereComputeParams)Params;
    params.Direction = (FVector)Direction;
    params.SkyColor = (FLinearColor)SkyColor;
    params.ComputeType = (ESkyAtmosphereColorationComputeType)ComputeType;
    params.OutputType = (ESkyAtmosphereColorationComputeOutput)OutputType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SkyColor = params.SkyColor;
}
void USkyAtmosphereColorationCompute::SkyColorLit(UObject* WorldContextObject, FDayNightLightSkyAtmosphereComputeParams Params, FVector Direction, FLinearColor& SkyColor, float& SkyIntensity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyAtmosphereColorationCompute.SkyColorLit"));
    struct Params_SkyColorLit {
        UObject* WorldContextObject; // 0x0
        FDayNightLightSkyAtmosphereComputeParams Params; // 0x8
        FVector Direction; // 0x80
        FLinearColor SkyColor; // 0x8c
        float SkyIntensity; // 0x9c
    }; // Size: 0xa0
    Params_SkyColorLit params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Params = (FDayNightLightSkyAtmosphereComputeParams)Params;
    params.Direction = (FVector)Direction;
    params.SkyColor = (FLinearColor)SkyColor;
    params.SkyIntensity = (float)SkyIntensity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SkyColor = params.SkyColor;
    SkyIntensity = params.SkyIntensity;
}
void USkyAtmosphereColorationCompute::SkyColorBase(UObject* WorldContextObject, FDayNightLightSkyAtmosphereComputeParams Params, FVector Direction, FLinearColor& SkyColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyAtmosphereColorationCompute.SkyColorBase"));
    struct Params_SkyColorBase {
        UObject* WorldContextObject; // 0x0
        FDayNightLightSkyAtmosphereComputeParams Params; // 0x8
        FVector Direction; // 0x80
        FLinearColor SkyColor; // 0x8c
    }; // Size: 0x9c
    Params_SkyColorBase params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Params = (FDayNightLightSkyAtmosphereComputeParams)Params;
    params.Direction = (FVector)Direction;
    params.SkyColor = (FLinearColor)SkyColor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SkyColor = params.SkyColor;
}

#include "AActor.hpp"
#include "EBeaufortWindScale.hpp"
#include "EWindDirectionCompass.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
#include "UWind.hpp"
UWind* UWind::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.Wind");
    return (UWind*)res;
}
void UWind::GetWindAtComponent(USceneComponent* SceneComponent, FVector& WindDirection, float& WindSpeed, bool& bIndoors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.Wind.GetWindAtComponent"));
    struct Params_GetWindAtComponent {
        USceneComponent* SceneComponent; // 0x0
        FVector WindDirection; // 0x8
        float WindSpeed; // 0x14
        bool bIndoors; // 0x18
    }; // Size: 0x19
    Params_GetWindAtComponent params{};
    params.SceneComponent = (USceneComponent*)SceneComponent;
    params.WindDirection = (FVector)WindDirection;
    params.WindSpeed = (float)WindSpeed;
    params.bIndoors = (bool)bIndoors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    WindDirection = params.WindDirection;
    WindSpeed = params.WindSpeed;
    bIndoors = params.bIndoors;
}
void UWind::GetWindAtPosition(UObject* WorldContextObject, FVector Position, FVector& WindDirection, float& WindSpeed, float IncludeOutdoors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.Wind.GetWindAtPosition"));
    struct Params_GetWindAtPosition {
        UObject* WorldContextObject; // 0x0
        FVector Position; // 0x8
        FVector WindDirection; // 0x14
        float WindSpeed; // 0x20
        float IncludeOutdoors; // 0x24
    }; // Size: 0x28
    Params_GetWindAtPosition params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Position = (FVector)Position;
    params.WindDirection = (FVector)WindDirection;
    params.WindSpeed = (float)WindSpeed;
    params.IncludeOutdoors = (float)IncludeOutdoors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    WindDirection = params.WindDirection;
    WindSpeed = params.WindSpeed;
}
void UWind::WindWorldAzimuthToCompass(float WindAzimuthDegrees, EWindDirectionCompass& WindDirectionCompass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.Wind.WindWorldAzimuthToCompass"));
    struct Params_WindWorldAzimuthToCompass {
        float WindAzimuthDegrees; // 0x0
        EWindDirectionCompass WindDirectionCompass; // 0x4
    }; // Size: 0x5
    Params_WindWorldAzimuthToCompass params{};
    params.WindAzimuthDegrees = (float)WindAzimuthDegrees;
    params.WindDirectionCompass = (EWindDirectionCompass)WindDirectionCompass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    WindDirectionCompass = params.WindDirectionCompass;
}
void UWind::WindDirectionToCompass(UObject* WorldContextObject, FVector WindDirection, EWindDirectionCompass& WindDirectionCompass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.Wind.WindDirectionToCompass"));
    struct Params_WindDirectionToCompass {
        UObject* WorldContextObject; // 0x0
        FVector WindDirection; // 0x8
        EWindDirectionCompass WindDirectionCompass; // 0x14
    }; // Size: 0x15
    Params_WindDirectionToCompass params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.WindDirection = (FVector)WindDirection;
    params.WindDirectionCompass = (EWindDirectionCompass)WindDirectionCompass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    WindDirectionCompass = params.WindDirectionCompass;
}
void UWind::WindDirectionToWorldAzimuthAltitude(UObject* WorldContextObject, FVector WindDirection, float& WindAzimuthDegrees, float& WindAltitudeDegrees) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.Wind.WindDirectionToWorldAzimuthAltitude"));
    struct Params_WindDirectionToWorldAzimuthAltitude {
        UObject* WorldContextObject; // 0x0
        FVector WindDirection; // 0x8
        float WindAzimuthDegrees; // 0x14
        float WindAltitudeDegrees; // 0x18
    }; // Size: 0x1c
    Params_WindDirectionToWorldAzimuthAltitude params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.WindDirection = (FVector)WindDirection;
    params.WindAzimuthDegrees = (float)WindAzimuthDegrees;
    params.WindAltitudeDegrees = (float)WindAltitudeDegrees;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    WindAzimuthDegrees = params.WindAzimuthDegrees;
    WindAltitudeDegrees = params.WindAltitudeDegrees;
}
void UWind::WindDirectionToWorldAzimuth(UObject* WorldContextObject, FVector WindDirection, float& WindAzimuthDegrees) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.Wind.WindDirectionToWorldAzimuth"));
    struct Params_WindDirectionToWorldAzimuth {
        UObject* WorldContextObject; // 0x0
        FVector WindDirection; // 0x8
        float WindAzimuthDegrees; // 0x14
    }; // Size: 0x18
    Params_WindDirectionToWorldAzimuth params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.WindDirection = (FVector)WindDirection;
    params.WindAzimuthDegrees = (float)WindAzimuthDegrees;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    WindAzimuthDegrees = params.WindAzimuthDegrees;
}
void UWind::WindDirectionCompassName(EWindDirectionCompass WindDirectionCompass, FString& CompassName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.Wind.WindDirectionCompassName"));
    struct Params_WindDirectionCompassName {
        EWindDirectionCompass WindDirectionCompass; // 0x0
        char pad_1[0x7];
        FString CompassName; // 0x8
    }; // Size: 0x18
    Params_WindDirectionCompassName params{};
    params.WindDirectionCompass = (EWindDirectionCompass)WindDirectionCompass;
    params.CompassName = (FString)CompassName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    CompassName = params.CompassName;
}
void UWind::GetWindAtActor(AActor* Actor, FVector& WindDirection, float& WindSpeed, bool& bIndoors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.Wind.GetWindAtActor"));
    struct Params_GetWindAtActor {
        AActor* Actor; // 0x0
        FVector WindDirection; // 0x8
        float WindSpeed; // 0x14
        bool bIndoors; // 0x18
    }; // Size: 0x19
    Params_GetWindAtActor params{};
    params.Actor = (AActor*)Actor;
    params.WindDirection = (FVector)WindDirection;
    params.WindSpeed = (float)WindSpeed;
    params.bIndoors = (bool)bIndoors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    WindDirection = params.WindDirection;
    WindSpeed = params.WindSpeed;
    bIndoors = params.bIndoors;
}
void UWind::BeaufortScaleName(EBeaufortWindScale BeaufortWindScale, int32_t& ScaleINdex, FString& ScaleName, FString& ScaleDescription) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.Wind.BeaufortScaleName"));
    struct Params_BeaufortScaleName {
        EBeaufortWindScale BeaufortWindScale; // 0x0
        char pad_1[0x3];
        int32_t ScaleINdex; // 0x4
        FString ScaleName; // 0x8
        FString ScaleDescription; // 0x18
    }; // Size: 0x28
    Params_BeaufortScaleName params{};
    params.BeaufortWindScale = (EBeaufortWindScale)BeaufortWindScale;
    params.ScaleINdex = (int32_t)ScaleINdex;
    params.ScaleName = (FString)ScaleName;
    params.ScaleDescription = (FString)ScaleDescription;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ScaleINdex = params.ScaleINdex;
    ScaleName = params.ScaleName;
    ScaleDescription = params.ScaleDescription;
}
void UWind::BeaufortScaleFromSpeed(float WindSpeed, EBeaufortWindScale& BeaufortWindScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Wind.Wind.BeaufortScaleFromSpeed"));
    struct Params_BeaufortScaleFromSpeed {
        float WindSpeed; // 0x0
        EBeaufortWindScale BeaufortWindScale; // 0x4
    }; // Size: 0x5
    Params_BeaufortScaleFromSpeed params{};
    params.WindSpeed = (float)WindSpeed;
    params.BeaufortWindScale = (EBeaufortWindScale)BeaufortWindScale;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    BeaufortWindScale = params.BeaufortWindScale;
}

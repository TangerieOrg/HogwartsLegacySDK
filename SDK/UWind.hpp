#pragma once
#include <cstdint>
#include "EBeaufortWindScale.hpp"
#include "EWindDirectionCompass.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
class USceneComponent;
class AActor;
#pragma pack(push, 1)
class UWind : public UBlueprintFunctionLibrary {
public:
    static UWind* StaticClass();
    static void WindWorldAzimuthToCompass(float WindAzimuthDegrees, EWindDirectionCompass& WindDirectionCompass);
    static void WindDirectionToWorldAzimuthAltitude(UObject* WorldContextObject, FVector WindDirection, float& WindAzimuthDegrees, float& WindAltitudeDegrees);
    static void WindDirectionToWorldAzimuth(UObject* WorldContextObject, FVector WindDirection, float& WindAzimuthDegrees);
    static void WindDirectionToCompass(UObject* WorldContextObject, FVector WindDirection, EWindDirectionCompass& WindDirectionCompass);
    static void WindDirectionCompassName(EWindDirectionCompass WindDirectionCompass, FString& CompassName);
    static void GetWindAtPosition(UObject* WorldContextObject, FVector Position, FVector& WindDirection, float& WindSpeed, float IncludeOutdoors);
    static void GetWindAtComponent(USceneComponent* SceneComponent, FVector& WindDirection, float& WindSpeed, bool& bIndoors);
    static void GetWindAtActor(AActor* Actor, FVector& WindDirection, float& WindSpeed, bool& bIndoors);
    static void BeaufortScaleName(EBeaufortWindScale BeaufortWindScale, int32_t& ScaleINdex, FString& ScaleName, FString& ScaleDescription);
    static void BeaufortScaleFromSpeed(float WindSpeed, EBeaufortWindScale& BeaufortWindScale);
}; // Size: 0x28
#pragma pack(pop)

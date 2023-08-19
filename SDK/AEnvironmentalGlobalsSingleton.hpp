#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FEnvironmentalGlobals.hpp"
#include "FEnvironmentalGlobalsIndoors.hpp"
#include "FEnvironmentalGlobalsVelocityTracker.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
class UMaterialParameterCollection;
class UNiagaraParameterCollection;
class UObject;
struct FEnvironmentalGlobalsSeason;
#pragma pack(push, 1)
class AEnvironmentalGlobalsSingleton : public AActor {
public:
    char pad_248[0x8];
    FEnvironmentalGlobals Globals; // 0x250
    UMaterialParameterCollection* MaterialParameterCollection; // 0x4f0
    UNiagaraParameterCollection* NiagaraParameterCollection; // 0x4f8
    FEnvironmentalGlobalsVelocityTracker PlayerVelocity; // 0x500
    FEnvironmentalGlobalsVelocityTracker CameraVelocity; // 0x530
    FEnvironmentalGlobalsIndoors AccumulateIndoors; // 0x560
    bool bDirty; // 0x578
    bool bDiscontinuity; // 0x579
    char pad_57a[0x6];
    static AEnvironmentalGlobalsSingleton* StaticClass();
    static void GetEnvironmentalGlobals(UObject* WorldContextObject, FEnvironmentalGlobals& EnvironmentalGlobals);
    static void EnvironmentalGlobalsSetExtraVector(UObject* WorldContextObject, FName Name, FVector Value, bool& bSuccess);
    static void EnvironmentalGlobalsSetExtraScalar(UObject* WorldContextObject, FName Name, float Value, bool& bSuccess);
    static void EnvironmentalGlobalsSetExtraColor(UObject* WorldContextObject, FName Name, FLinearColor Value, bool& bSuccess);
    static void EnvironmentalGlobalsGetSeason(UObject* WorldContextObject, FEnvironmentalGlobalsSeason& Season, bool bAllowOverrides);
    static void EnvironmentalGlobalsGetExtraVector(UObject* WorldContextObject, FName Name, FVector& Value, bool& bExists);
    static void EnvironmentalGlobalsGetExtraScalar(UObject* WorldContextObject, FName Name, float& Value, bool& bExists);
    static void EnvironmentalGlobalsGetExtraColor(UObject* WorldContextObject, FName Name, FLinearColor& Value, bool& bExists);
}; // Size: 0x580
#pragma pack(pop)

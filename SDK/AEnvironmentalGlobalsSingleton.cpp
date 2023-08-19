#include "AActor.hpp"
#include "AEnvironmentalGlobalsSingleton.hpp"
#include "FEnvironmentalGlobals.hpp"
#include "FEnvironmentalGlobalsIndoors.hpp"
#include "FEnvironmentalGlobalsSeason.hpp"
#include "FEnvironmentalGlobalsVelocityTracker.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMaterialParameterCollection.hpp"
#include "UNiagaraParameterCollection.hpp"
#include "UObject.hpp"
AEnvironmentalGlobalsSingleton* AEnvironmentalGlobalsSingleton::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsSingleton");
    return (AEnvironmentalGlobalsSingleton*)res;
}
void AEnvironmentalGlobalsSingleton::GetEnvironmentalGlobals(UObject* WorldContextObject, FEnvironmentalGlobals& EnvironmentalGlobals) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EnvironmentalGlobals.EnvironmentalGlobalsSingleton.GetEnvironmentalGlobals"));
    struct Params_GetEnvironmentalGlobals {
        UObject* WorldContextObject; // 0x0
        char pad_8[0x8];
        FEnvironmentalGlobals EnvironmentalGlobals; // 0x10
    }; // Size: 0x2b0
    Params_GetEnvironmentalGlobals params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.EnvironmentalGlobals = (FEnvironmentalGlobals)EnvironmentalGlobals;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    EnvironmentalGlobals = params.EnvironmentalGlobals;
}
void AEnvironmentalGlobalsSingleton::EnvironmentalGlobalsSetExtraVector(UObject* WorldContextObject, FName Name, FVector Value, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EnvironmentalGlobals.EnvironmentalGlobalsSingleton.EnvironmentalGlobalsSetExtraVector"));
    struct Params_EnvironmentalGlobalsSetExtraVector {
        UObject* WorldContextObject; // 0x0
        FName Name; // 0x8
        FVector Value; // 0x10
        bool bSuccess; // 0x1c
    }; // Size: 0x1d
    Params_EnvironmentalGlobalsSetExtraVector params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Name = (FName)Name;
    params.Value = (FVector)Value;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void AEnvironmentalGlobalsSingleton::EnvironmentalGlobalsGetExtraVector(UObject* WorldContextObject, FName Name, FVector& Value, bool& bExists) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EnvironmentalGlobals.EnvironmentalGlobalsSingleton.EnvironmentalGlobalsGetExtraVector"));
    struct Params_EnvironmentalGlobalsGetExtraVector {
        UObject* WorldContextObject; // 0x0
        FName Name; // 0x8
        FVector Value; // 0x10
        bool bExists; // 0x1c
    }; // Size: 0x1d
    Params_EnvironmentalGlobalsGetExtraVector params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Name = (FName)Name;
    params.Value = (FVector)Value;
    params.bExists = (bool)bExists;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Value = params.Value;
    bExists = params.bExists;
}
void AEnvironmentalGlobalsSingleton::EnvironmentalGlobalsSetExtraColor(UObject* WorldContextObject, FName Name, FLinearColor Value, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EnvironmentalGlobals.EnvironmentalGlobalsSingleton.EnvironmentalGlobalsSetExtraColor"));
    struct Params_EnvironmentalGlobalsSetExtraColor {
        UObject* WorldContextObject; // 0x0
        FName Name; // 0x8
        FLinearColor Value; // 0x10
        bool bSuccess; // 0x20
    }; // Size: 0x21
    Params_EnvironmentalGlobalsSetExtraColor params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Name = (FName)Name;
    params.Value = (FLinearColor)Value;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void AEnvironmentalGlobalsSingleton::EnvironmentalGlobalsSetExtraScalar(UObject* WorldContextObject, FName Name, float Value, bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EnvironmentalGlobals.EnvironmentalGlobalsSingleton.EnvironmentalGlobalsSetExtraScalar"));
    struct Params_EnvironmentalGlobalsSetExtraScalar {
        UObject* WorldContextObject; // 0x0
        FName Name; // 0x8
        float Value; // 0x10
        bool bSuccess; // 0x14
    }; // Size: 0x15
    Params_EnvironmentalGlobalsSetExtraScalar params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Name = (FName)Name;
    params.Value = (float)Value;
    params.bSuccess = (bool)bSuccess;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void AEnvironmentalGlobalsSingleton::EnvironmentalGlobalsGetSeason(UObject* WorldContextObject, FEnvironmentalGlobalsSeason& Season, bool bAllowOverrides) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EnvironmentalGlobals.EnvironmentalGlobalsSingleton.EnvironmentalGlobalsGetSeason"));
    struct Params_EnvironmentalGlobalsGetSeason {
        UObject* WorldContextObject; // 0x0
        FEnvironmentalGlobalsSeason Season; // 0x8
        bool bAllowOverrides; // 0x2c
    }; // Size: 0x2d
    Params_EnvironmentalGlobalsGetSeason params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Season = (FEnvironmentalGlobalsSeason)Season;
    params.bAllowOverrides = (bool)bAllowOverrides;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Season = params.Season;
}
void AEnvironmentalGlobalsSingleton::EnvironmentalGlobalsGetExtraScalar(UObject* WorldContextObject, FName Name, float& Value, bool& bExists) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EnvironmentalGlobals.EnvironmentalGlobalsSingleton.EnvironmentalGlobalsGetExtraScalar"));
    struct Params_EnvironmentalGlobalsGetExtraScalar {
        UObject* WorldContextObject; // 0x0
        FName Name; // 0x8
        float Value; // 0x10
        bool bExists; // 0x14
    }; // Size: 0x15
    Params_EnvironmentalGlobalsGetExtraScalar params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Name = (FName)Name;
    params.Value = (float)Value;
    params.bExists = (bool)bExists;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Value = params.Value;
    bExists = params.bExists;
}
void AEnvironmentalGlobalsSingleton::EnvironmentalGlobalsGetExtraColor(UObject* WorldContextObject, FName Name, FLinearColor& Value, bool& bExists) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EnvironmentalGlobals.EnvironmentalGlobalsSingleton.EnvironmentalGlobalsGetExtraColor"));
    struct Params_EnvironmentalGlobalsGetExtraColor {
        UObject* WorldContextObject; // 0x0
        FName Name; // 0x8
        FLinearColor Value; // 0x10
        bool bExists; // 0x20
    }; // Size: 0x21
    Params_EnvironmentalGlobalsGetExtraColor params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Name = (FName)Name;
    params.Value = (FLinearColor)Value;
    params.bExists = (bool)bExists;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Value = params.Value;
    bExists = params.bExists;
}

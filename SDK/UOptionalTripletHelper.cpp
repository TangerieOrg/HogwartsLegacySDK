#include "FOptionalTriplet.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UOptionalTripletHelper.hpp"
UOptionalTripletHelper* UOptionalTripletHelper::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.OptionalTripletHelper");
    return (UOptionalTripletHelper*)res;
}
FVector UOptionalTripletHelper::ClampVec(FVector& InVec, FOptionalTriplet& InMin, FOptionalTriplet& InMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.OptionalTripletHelper.ClampVec"));
    struct Params_ClampVec {
        FVector InVec; // 0x0
        FOptionalTriplet InMin; // 0xc
        FOptionalTriplet InMax; // 0x24
        FVector ReturnValue; // 0x3c
    }; // Size: 0x48
    Params_ClampVec params{};
    params.InVec = (FVector)InVec;
    params.InMin = (FOptionalTriplet)InMin;
    params.InMax = (FOptionalTriplet)InMax;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InVec = params.InVec;
    InMin = params.InMin;
    InMax = params.InMax;
    return (FVector)params.ReturnValue;
}
FRotator UOptionalTripletHelper::ClampRot(FRotator& InRot, FOptionalTriplet& InMin, FOptionalTriplet& InMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.OptionalTripletHelper.ClampRot"));
    struct Params_ClampRot {
        FRotator InRot; // 0x0
        FOptionalTriplet InMin; // 0xc
        FOptionalTriplet InMax; // 0x24
        FRotator ReturnValue; // 0x3c
    }; // Size: 0x48
    Params_ClampRot params{};
    params.InRot = (FRotator)InRot;
    params.InMin = (FOptionalTriplet)InMin;
    params.InMax = (FOptionalTriplet)InMax;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InRot = params.InRot;
    InMin = params.InMin;
    InMax = params.InMax;
    return (FRotator)params.ReturnValue;
}

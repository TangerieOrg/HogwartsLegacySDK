#include "EFootPlantEnum.hpp"
#include "FRichCurve.hpp"
#include "FVector.hpp"
#include "UCurveBase.hpp"
#include "UCurveClip.hpp"
#include "UFunction.hpp"
UCurveClip* UCurveClip::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.CurveClip");
    return (UCurveClip*)res;
}
FVector UCurveClip::GetAcceleration(float InTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.CurveClip.GetAcceleration"));
    struct Params_GetAcceleration {
        float InTime; // 0x0
        FVector ReturnValue; // 0x4
    }; // Size: 0x10
    Params_GetAcceleration params{};
    params.InTime = (float)InTime;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UCurveClip::GetVelocity(float InTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.CurveClip.GetVelocity"));
    struct Params_GetVelocity {
        float InTime; // 0x0
        FVector ReturnValue; // 0x4
    }; // Size: 0x10
    Params_GetVelocity params{};
    params.InTime = (float)InTime;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
EFootPlantEnum UCurveClip::GetFootPlants(float InTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.CurveClip.GetFootPlants"));
    struct Params_GetFootPlants {
        float InTime; // 0x0
        EFootPlantEnum ReturnValue; // 0x4
    }; // Size: 0x5
    Params_GetFootPlants params{};
    params.InTime = (float)InTime;
    ProcessEvent(func, &params);
    return (EFootPlantEnum)params.ReturnValue;
}

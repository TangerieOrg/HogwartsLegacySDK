#include "FLinearColor.hpp"
#include "FRichCurve.hpp"
#include "UCurveBase.hpp"
#include "UCurveLinearColor.hpp"
#include "UFunction.hpp"
UCurveLinearColor* UCurveLinearColor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CurveLinearColor");
    return (UCurveLinearColor*)res;
}
FLinearColor UCurveLinearColor::GetUnadjustedLinearColorValue(float InTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CurveLinearColor.GetUnadjustedLinearColorValue"));
    struct Params_GetUnadjustedLinearColorValue {
        float InTime; // 0x0
        FLinearColor ReturnValue; // 0x4
    }; // Size: 0x14
    Params_GetUnadjustedLinearColorValue params{};
    params.InTime = (float)InTime;
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
FLinearColor UCurveLinearColor::GetLinearColorValue(float InTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CurveLinearColor.GetLinearColorValue"));
    struct Params_GetLinearColorValue {
        float InTime; // 0x0
        FLinearColor ReturnValue; // 0x4
    }; // Size: 0x14
    Params_GetLinearColorValue params{};
    params.InTime = (float)InTime;
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
FLinearColor UCurveLinearColor::GetClampedLinearColorValue(float InTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CurveLinearColor.GetClampedLinearColorValue"));
    struct Params_GetClampedLinearColorValue {
        float InTime; // 0x0
        FLinearColor ReturnValue; // 0x4
    }; // Size: 0x14
    Params_GetClampedLinearColorValue params{};
    params.InTime = (float)InTime;
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}

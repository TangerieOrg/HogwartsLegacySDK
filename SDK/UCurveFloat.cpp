#include "FRichCurve.hpp"
#include "UCurveBase.hpp"
#include "UCurveFloat.hpp"
#include "UFunction.hpp"
UCurveFloat* UCurveFloat::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CurveFloat");
    return (UCurveFloat*)res;
}
float UCurveFloat::GetFloatValue(float InTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CurveFloat.GetFloatValue"));
    struct Params_GetFloatValue {
        float InTime; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetFloatValue params{};
    params.InTime = (float)InTime;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}

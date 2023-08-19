#include "FRichCurve.hpp"
#include "FVector2D.hpp"
#include "UCurveBase.hpp"
#include "UCurveVector2D.hpp"
#include "UFunction.hpp"
UCurveVector2D* UCurveVector2D::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CurveVector2D");
    return (UCurveVector2D*)res;
}
FVector2D UCurveVector2D::GetVector2DValue(float InTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CurveVector2D.GetVector2DValue"));
    struct Params_GetVector2DValue {
        float InTime; // 0x0
        FVector2D ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetVector2DValue params{};
    params.InTime = (float)InTime;
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}

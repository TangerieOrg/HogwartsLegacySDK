#include "UCurveBase.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UCurveBase* UCurveBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CurveBase");
    return (UCurveBase*)res;
}
void UCurveBase::GetValueRange(float& MinValue, float& MaxValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CurveBase.GetValueRange"));
    struct Params_GetValueRange {
        float MinValue; // 0x0
        float MaxValue; // 0x4
    }; // Size: 0x8
    Params_GetValueRange params{};
    params.MinValue = (float)MinValue;
    params.MaxValue = (float)MaxValue;
    ProcessEvent(func, &params);
    MinValue = params.MinValue;
    MaxValue = params.MaxValue;
}
void UCurveBase::GetTimeRange(float& MinTime, float& MaxTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CurveBase.GetTimeRange"));
    struct Params_GetTimeRange {
        float MinTime; // 0x0
        float MaxTime; // 0x4
    }; // Size: 0x8
    Params_GetTimeRange params{};
    params.MinTime = (float)MinTime;
    params.MaxTime = (float)MaxTime;
    ProcessEvent(func, &params);
    MinTime = params.MinTime;
    MaxTime = params.MaxTime;
}

#include "FNamedCurveValue.hpp"
#include "UCurveSourceInterface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
float UCurveSourceInterface::GetCurveValue(FName CurveName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CurveSourceInterface.GetCurveValue"));
    struct Params_GetCurveValue {
        FName CurveName; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetCurveValue params{};
    params.CurveName = (FName)CurveName;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UCurveSourceInterface* UCurveSourceInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CurveSourceInterface");
    return (UCurveSourceInterface*)res;
}
void UCurveSourceInterface::GetCurves(TArray<FNamedCurveValue>& OutValues) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CurveSourceInterface.GetCurves"));
    struct Params_GetCurves {
        TArray<FNamedCurveValue> OutValues; // 0x0
    }; // Size: 0x10
    Params_GetCurves params{};
    params.OutValues = (TArray<FNamedCurveValue>)OutValues;
    ProcessEvent(func, &params);
    OutValues = params.OutValues;
}
FName UCurveSourceInterface::GetBindingName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CurveSourceInterface.GetBindingName"));
    struct Params_GetBindingName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBindingName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}

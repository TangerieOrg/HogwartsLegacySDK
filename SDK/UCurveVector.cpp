#include "FRichCurve.hpp"
#include "FVector.hpp"
#include "UCurveBase.hpp"
#include "UCurveVector.hpp"
#include "UFunction.hpp"
UCurveVector* UCurveVector::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CurveVector");
    return (UCurveVector*)res;
}
FVector UCurveVector::GetVectorValue(float InTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CurveVector.GetVectorValue"));
    struct Params_GetVectorValue {
        float InTime; // 0x0
        FVector ReturnValue; // 0x4
    }; // Size: 0x10
    Params_GetVectorValue params{};
    params.InTime = (float)InTime;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}

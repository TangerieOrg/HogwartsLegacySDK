#include "FTransform.hpp"
#include "UBaseProvider.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UTransformProvider.hpp"
UTransformProvider* UTransformProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.TransformProvider");
    return (UTransformProvider*)res;
}
FTransform UTransformProvider::GetTransformBP(UObject* Context, float TimeOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.TransformProvider.GetTransformBP"));
    struct Params_GetTransformBP {
        UObject* Context; // 0x0
        float TimeOffset; // 0x8
        char pad_c[0x4];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetTransformBP params{};
    params.Context = (UObject*)Context;
    params.TimeOffset = (float)TimeOffset;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}

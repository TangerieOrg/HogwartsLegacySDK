#include "UBaseProvider.hpp"
#include "UFloatProvider.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UFloatProvider* UFloatProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.FloatProvider");
    return (UFloatProvider*)res;
}
float UFloatProvider::GetFloatBP(UObject* Context, float TimeOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.FloatProvider.GetFloatBP"));
    struct Params_GetFloatBP {
        UObject* Context; // 0x0
        float TimeOffset; // 0x8
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_GetFloatBP params{};
    params.Context = (UObject*)Context;
    params.TimeOffset = (float)TimeOffset;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}

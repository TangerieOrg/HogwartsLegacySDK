#include "UBaseProvider.hpp"
#include "UFunction.hpp"
#include "UIntProvider.hpp"
#include "UObject.hpp"
int32_t UIntProvider::GetIntBP(UObject* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.IntProvider.GetIntBP"));
    struct Params_GetIntBP {
        UObject* Context; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetIntBP params{};
    params.Context = (UObject*)Context;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UIntProvider* UIntProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.IntProvider");
    return (UIntProvider*)res;
}

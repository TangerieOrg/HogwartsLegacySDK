#include "UBaseProvider.hpp"
#include "UBoolProvider.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UBoolProvider* UBoolProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.BoolProvider");
    return (UBoolProvider*)res;
}
bool UBoolProvider::GetBoolBP(UObject* Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.BoolProvider.GetBoolBP"));
    struct Params_GetBoolBP {
        UObject* Context; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetBoolBP params{};
    params.Context = (UObject*)Context;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}

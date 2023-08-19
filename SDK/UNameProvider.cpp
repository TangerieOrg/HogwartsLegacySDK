#include "UBaseProvider.hpp"
#include "UFunction.hpp"
#include "UNameProvider.hpp"
#include "UObject.hpp"
UNameProvider* UNameProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.NameProvider");
    return (UNameProvider*)res;
}
FName UNameProvider::GetNameBP(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.NameProvider.GetNameBP"));
    struct Params_GetNameBP {
        UObject* Caller; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetNameBP params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}

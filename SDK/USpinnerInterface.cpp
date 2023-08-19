#include "UFunction.hpp"
#include "UInterface.hpp"
#include "USpinnerInterface.hpp"
USpinnerInterface* USpinnerInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpinnerInterface");
    return (USpinnerInterface*)res;
}
float USpinnerInterface::LoadingComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpinnerInterface.LoadingComplete"));
    struct Params_LoadingComplete {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_LoadingComplete params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}

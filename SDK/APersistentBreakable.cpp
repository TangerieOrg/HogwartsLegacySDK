#include "APersistentBreakable.hpp"
#include "AWorldObject.hpp"
#include "EBreakableState.hpp"
#include "UFunction.hpp"
APersistentBreakable* APersistentBreakable::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PersistentBreakable");
    return (APersistentBreakable*)res;
}
bool APersistentBreakable::ResetState(EBreakableState NextState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PersistentBreakable.ResetState"));
    struct Params_ResetState {
        EBreakableState NextState; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_ResetState params{};
    params.NextState = (EBreakableState)NextState;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}

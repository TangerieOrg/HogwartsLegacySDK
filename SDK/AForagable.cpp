#include "AForagable.hpp"
#include "AWorldObject.hpp"
#include "EForageableState.hpp"
#include "UFunction.hpp"
AForagable* AForagable::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Foragable");
    return (AForagable*)res;
}
bool AForagable::ResetState(EForageableState NextState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Foragable.ResetState"));
    struct Params_ResetState {
        EForageableState NextState; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_ResetState params{};
    params.NextState = (EForageableState)NextState;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t AForagable::GetItemCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Foragable.GetItemCount"));
    struct Params_GetItemCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetItemCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FName AForagable::GetItemID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Foragable.GetItemID"));
    struct Params_GetItemID {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetItemID params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}

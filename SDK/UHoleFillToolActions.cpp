#include "UFunction.hpp"
#include "UHoleFillToolActions.hpp"
#include "UInteractiveToolPropertySet.hpp"
void UHoleFillToolActions::SelectAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.HoleFillToolActions.SelectAll"));
    struct Params_SelectAll {
    }; // Size: 0x0
    Params_SelectAll params{};
    ProcessEvent(func, &params);
}
UHoleFillToolActions* UHoleFillToolActions::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.HoleFillToolActions");
    return (UHoleFillToolActions*)res;
}
void UHoleFillToolActions::Clear() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MeshModelingTools.HoleFillToolActions.Clear"));
    struct Params_Clear {
    }; // Size: 0x0
    Params_Clear params{};
    ProcessEvent(func, &params);
}

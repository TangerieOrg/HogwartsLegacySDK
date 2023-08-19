#include "UCurseInterface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UCurseInterface* UCurseInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CurseInterface");
    return (UCurseInterface*)res;
}
void UCurseInterface::OnUncursed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CurseInterface.OnUncursed"));
    struct Params_OnUncursed {
    }; // Size: 0x0
    Params_OnUncursed params{};
    ProcessEvent(func, &params);
}
void UCurseInterface::OnInteractWithCurse() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CurseInterface.OnInteractWithCurse"));
    struct Params_OnInteractWithCurse {
    }; // Size: 0x0
    Params_OnInteractWithCurse params{};
    ProcessEvent(func, &params);
}
void UCurseInterface::OnFailedToUncurse() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CurseInterface.OnFailedToUncurse"));
    struct Params_OnFailedToUncurse {
    }; // Size: 0x0
    Params_OnFailedToUncurse params{};
    ProcessEvent(func, &params);
}

#include "UActionSelectionScreenBase.hpp"
#include "UActionSelectionScreenBase_Controller.hpp"
#include "UFunction.hpp"
UActionSelectionScreenBase_Controller* UActionSelectionScreenBase_Controller::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ActionSelectionScreenBase_Controller");
    return (UActionSelectionScreenBase_Controller*)res;
}
void UActionSelectionScreenBase_Controller::OnSpellModifierRelease() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase_Controller.OnSpellModifierRelease"));
    struct Params_OnSpellModifierRelease {
    }; // Size: 0x0
    Params_OnSpellModifierRelease params{};
    ProcessEvent(func, &params);
}
void UActionSelectionScreenBase_Controller::OnSpellModifierPress() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ActionSelectionScreenBase_Controller.OnSpellModifierPress"));
    struct Params_OnSpellModifierPress {
    }; // Size: 0x0
    Params_OnSpellModifierPress params{};
    ProcessEvent(func, &params);
}

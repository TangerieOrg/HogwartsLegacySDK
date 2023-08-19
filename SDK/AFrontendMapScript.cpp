#include "AFrontendMapScript.hpp"
#include "ALevelScriptActor.hpp"
#include "UFunction.hpp"
AFrontendMapScript* AFrontendMapScript::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FrontendMapScript");
    return (AFrontendMapScript*)res;
}
void AFrontendMapScript::GoToMenu() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FrontendMapScript.GoToMenu"));
    struct Params_GoToMenu {
    }; // Size: 0x0
    Params_GoToMenu params{};
    ProcessEvent(func, &params);
}
void AFrontendMapScript::GoToIntro() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FrontendMapScript.GoToIntro"));
    struct Params_GoToIntro {
    }; // Size: 0x0
    Params_GoToIntro params{};
    ProcessEvent(func, &params);
}

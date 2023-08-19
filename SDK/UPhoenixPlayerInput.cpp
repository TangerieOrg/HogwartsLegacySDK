#include "EKeyLayout.hpp"
#include "UControlMapperPlayerInput.hpp"
#include "UFunction.hpp"
#include "UPhoenixPlayerInput.hpp"
void UPhoenixPlayerInput::ForceRebuildTransposedKeyMaps(bool bRestoreDefaults, EKeyLayout InCurrentLayout, EKeyLayout InNewLayout) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixPlayerInput.ForceRebuildTransposedKeyMaps"));
    struct Params_ForceRebuildTransposedKeyMaps {
        bool bRestoreDefaults; // 0x0
        EKeyLayout InCurrentLayout; // 0x1
        EKeyLayout InNewLayout; // 0x2
    }; // Size: 0x3
    Params_ForceRebuildTransposedKeyMaps params{};
    params.bRestoreDefaults = (bool)bRestoreDefaults;
    params.InCurrentLayout = (EKeyLayout)InCurrentLayout;
    params.InNewLayout = (EKeyLayout)InNewLayout;
    ProcessEvent(func, &params);
}
UPhoenixPlayerInput* UPhoenixPlayerInput::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixPlayerInput");
    return (UPhoenixPlayerInput*)res;
}
EKeyLayout UPhoenixPlayerInput::GetKeyLayout() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixPlayerInput.GetKeyLayout"));
    struct Params_GetKeyLayout {
        EKeyLayout ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetKeyLayout params{};
    ProcessEvent(func, &params);
    return (EKeyLayout)params.ReturnValue;
}

#include "UAvatarPresetOverride_Interface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
FName UAvatarPresetOverride_Interface::GetFullbodyPreset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AvatarPresetOverride_Interface.GetFullbodyPreset"));
    struct Params_GetFullbodyPreset {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetFullbodyPreset params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
UAvatarPresetOverride_Interface* UAvatarPresetOverride_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvatarPresetOverride_Interface");
    return (UAvatarPresetOverride_Interface*)res;
}

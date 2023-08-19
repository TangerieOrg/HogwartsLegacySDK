#include "UFunction.hpp"
#include "UHogwartsMapScreen.hpp"
#include "UMapHogwarts.hpp"
#include "UMapScreenBase.hpp"
void UHogwartsMapScreen::HogwartsBack_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HogwartsMapScreen.HogwartsBack_Event"));
    struct Params_HogwartsBack_Event {
    }; // Size: 0x0
    Params_HogwartsBack_Event params{};
    ProcessEvent(func, &params);
}
void UHogwartsMapScreen::HogwartsSelect_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HogwartsMapScreen.HogwartsSelect_Event"));
    struct Params_HogwartsSelect_Event {
    }; // Size: 0x0
    Params_HogwartsSelect_Event params{};
    ProcessEvent(func, &params);
}
UHogwartsMapScreen* UHogwartsMapScreen::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.HogwartsMapScreen");
    return (UHogwartsMapScreen*)res;
}
void UHogwartsMapScreen::HideOverlandButton() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HogwartsMapScreen.HideOverlandButton"));
    struct Params_HideOverlandButton {
    }; // Size: 0x0
    Params_HideOverlandButton params{};
    ProcessEvent(func, &params);
}
void UHogwartsMapScreen::ShowOverlandButton() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HogwartsMapScreen.ShowOverlandButton"));
    struct Params_ShowOverlandButton {
    }; // Size: 0x0
    Params_ShowOverlandButton params{};
    ProcessEvent(func, &params);
}
void UHogwartsMapScreen::HogwartsFastTravel_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HogwartsMapScreen.HogwartsFastTravel_Event"));
    struct Params_HogwartsFastTravel_Event {
    }; // Size: 0x0
    Params_HogwartsFastTravel_Event params{};
    ProcessEvent(func, &params);
}
void UHogwartsMapScreen::ShowHogsmeadeButton() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HogwartsMapScreen.ShowHogsmeadeButton"));
    struct Params_ShowHogsmeadeButton {
    }; // Size: 0x0
    Params_ShowHogsmeadeButton params{};
    ProcessEvent(func, &params);
}
void UHogwartsMapScreen::HogwartsSetPath_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HogwartsMapScreen.HogwartsSetPath_Event"));
    struct Params_HogwartsSetPath_Event {
    }; // Size: 0x0
    Params_HogwartsSetPath_Event params{};
    ProcessEvent(func, &params);
}
void UHogwartsMapScreen::HideHogsmeadeButton() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HogwartsMapScreen.HideHogsmeadeButton"));
    struct Params_HideHogsmeadeButton {
    }; // Size: 0x0
    Params_HideHogsmeadeButton params{};
    ProcessEvent(func, &params);
}
UMapHogwarts* UHogwartsMapScreen::GetMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HogwartsMapScreen.GetMap"));
    struct Params_GetMap {
        UMapHogwarts* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMap params{};
    ProcessEvent(func, &params);
    return (UMapHogwarts*)params.ReturnValue;
}

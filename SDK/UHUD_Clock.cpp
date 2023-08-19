#include "UFunction.hpp"
#include "UHUD_Clock.hpp"
#include "UUserWidget.hpp"
UHUD_Clock* UHUD_Clock::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.HUD_Clock");
    return (UHUD_Clock*)res;
}
void UHUD_Clock::OnTimeChanged(float Hour, float Minute) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HUD_Clock.OnTimeChanged"));
    struct Params_OnTimeChanged {
        float Hour; // 0x0
        float Minute; // 0x4
    }; // Size: 0x8
    Params_OnTimeChanged params{};
    params.Hour = (float)Hour;
    params.Minute = (float)Minute;
    ProcessEvent(func, &params);
}
void UHUD_Clock::Setup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HUD_Clock.Setup"));
    struct Params_Setup {
    }; // Size: 0x0
    Params_Setup params{};
    ProcessEvent(func, &params);
}

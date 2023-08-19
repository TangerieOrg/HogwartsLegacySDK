#include "FCombatParryInfo.hpp"
#include "UCombatParryButtonCallout.hpp"
#include "UCombatParryWidget.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPhoenixUserWidget.hpp"
UCombatParryWidget* UCombatParryWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CombatParryWidget");
    return (UCombatParryWidget*)res;
}
void UCombatParryWidget::CombatParryInfoTimerFinished(UObject* Caller, int32_t WindowID, int32_t ParryType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CombatParryWidget.CombatParryInfoTimerFinished"));
    struct Params_CombatParryInfoTimerFinished {
        UObject* Caller; // 0x0
        int32_t WindowID; // 0x8
        int32_t ParryType; // 0xc
    }; // Size: 0x10
    Params_CombatParryInfoTimerFinished params{};
    params.Caller = (UObject*)Caller;
    params.WindowID = (int32_t)WindowID;
    params.ParryType = (int32_t)ParryType;
    ProcessEvent(func, &params);
}

#include "AFreeStandingClock.hpp"
#include "ATransfigurationObjectBase.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
AFreeStandingClock* AFreeStandingClock::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FreeStandingClock");
    return (AFreeStandingClock*)res;
}
void AFreeStandingClock::OnClockChime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FreeStandingClock.OnClockChime"));
    struct Params_OnClockChime {
    }; // Size: 0x0
    Params_OnClockChime params{};
    ProcessEvent(func, &params);
}
void AFreeStandingClock::DoClockTick() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FreeStandingClock.DoClockTick"));
    struct Params_DoClockTick {
    }; // Size: 0x0
    Params_DoClockTick params{};
    ProcessEvent(func, &params);
}

#include "APhoenixMapRegion.hpp"
#include "UFunction.hpp"
#include "UMapIcon.hpp"
#include "UMapOverland.hpp"
#include "UMapScreenBase.hpp"
#include "UOverlandMapScreen.hpp"
UOverlandMapScreen* UOverlandMapScreen::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.OverlandMapScreen");
    return (UOverlandMapScreen*)res;
}
void UOverlandMapScreen::RegionChange_Event(APhoenixMapRegion* regionActor, APhoenixMapRegion* subregionActor, bool noString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OverlandMapScreen.RegionChange_Event"));
    struct Params_RegionChange_Event {
        APhoenixMapRegion* regionActor; // 0x0
        APhoenixMapRegion* subregionActor; // 0x8
        bool noString; // 0x10
    }; // Size: 0x11
    Params_RegionChange_Event params{};
    params.regionActor = (APhoenixMapRegion*)regionActor;
    params.subregionActor = (APhoenixMapRegion*)subregionActor;
    params.noString = (bool)noString;
    ProcessEvent(func, &params);
}
void UOverlandMapScreen::HoveredFilterRegion_Event(UMapIcon* Icon) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OverlandMapScreen.HoveredFilterRegion_Event"));
    struct Params_HoveredFilterRegion_Event {
        UMapIcon* Icon; // 0x0
    }; // Size: 0x8
    Params_HoveredFilterRegion_Event params{};
    params.Icon = (UMapIcon*)Icon;
    ProcessEvent(func, &params);
}
UMapOverland* UOverlandMapScreen::GetMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OverlandMapScreen.GetMap"));
    struct Params_GetMap {
        UMapOverland* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMap params{};
    ProcessEvent(func, &params);
    return (UMapOverland*)params.ReturnValue;
}
void UOverlandMapScreen::ExitHogwarts_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OverlandMapScreen.ExitHogwarts_Event"));
    struct Params_ExitHogwarts_Event {
    }; // Size: 0x0
    Params_ExitHogwarts_Event params{};
    ProcessEvent(func, &params);
}
void UOverlandMapScreen::EnterHogwarts_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OverlandMapScreen.EnterHogwarts_Event"));
    struct Params_EnterHogwarts_Event {
    }; // Size: 0x0
    Params_EnterHogwarts_Event params{};
    ProcessEvent(func, &params);
}

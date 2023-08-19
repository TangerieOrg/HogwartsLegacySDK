#include "FCelestialPointOfInterestName.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "USkyStateOverride.hpp"
#include "USkyStateOverrideCelestialPointOfInterestAlignTo.hpp"
USkyStateOverrideCelestialPointOfInterestAlignTo* USkyStateOverrideCelestialPointOfInterestAlignTo::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.SkyStateOverrideCelestialPointOfInterestAlignTo");
    return (USkyStateOverrideCelestialPointOfInterestAlignTo*)res;
}
void USkyStateOverrideCelestialPointOfInterestAlignTo::SetPointOfInterest(FCelestialPointOfInterestName NewPointOfInterest) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyStateOverrideCelestialPointOfInterestAlignTo.SetPointOfInterest"));
    struct Params_SetPointOfInterest {
        FCelestialPointOfInterestName NewPointOfInterest; // 0x0
    }; // Size: 0x8
    Params_SetPointOfInterest params{};
    params.NewPointOfInterest = (FCelestialPointOfInterestName)NewPointOfInterest;
    ProcessEvent(func, &params);
}
void USkyStateOverrideCelestialPointOfInterestAlignTo::SetPointOfInterestName(FName NewPointOfInterest) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyStateOverrideCelestialPointOfInterestAlignTo.SetPointOfInterestName"));
    struct Params_SetPointOfInterestName {
        FName NewPointOfInterest; // 0x0
    }; // Size: 0x8
    Params_SetPointOfInterestName params{};
    params.NewPointOfInterest = (FName)NewPointOfInterest;
    ProcessEvent(func, &params);
}
void USkyStateOverrideCelestialPointOfInterestAlignTo::GetPointOfInterestName(FName& CurrentPointOfInterest) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyStateOverrideCelestialPointOfInterestAlignTo.GetPointOfInterestName"));
    struct Params_GetPointOfInterestName {
        FName CurrentPointOfInterest; // 0x0
    }; // Size: 0x8
    Params_GetPointOfInterestName params{};
    params.CurrentPointOfInterest = (FName)CurrentPointOfInterest;
    ProcessEvent(func, &params);
    CurrentPointOfInterest = params.CurrentPointOfInterest;
}
void USkyStateOverrideCelestialPointOfInterestAlignTo::GetPointOfInterest(FCelestialPointOfInterestName& CurrentPointOfInterest) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyStateOverrideCelestialPointOfInterestAlignTo.GetPointOfInterest"));
    struct Params_GetPointOfInterest {
        FCelestialPointOfInterestName CurrentPointOfInterest; // 0x0
    }; // Size: 0x8
    Params_GetPointOfInterest params{};
    params.CurrentPointOfInterest = (FCelestialPointOfInterestName)CurrentPointOfInterest;
    ProcessEvent(func, &params);
    CurrentPointOfInterest = params.CurrentPointOfInterest;
}

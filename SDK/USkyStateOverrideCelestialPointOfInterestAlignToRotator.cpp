#include "FRotator.hpp"
#include "UFunction.hpp"
#include "USkyStateOverrideCelestialPointOfInterestAlignTo.hpp"
#include "USkyStateOverrideCelestialPointOfInterestAlignToRotator.hpp"
USkyStateOverrideCelestialPointOfInterestAlignToRotator* USkyStateOverrideCelestialPointOfInterestAlignToRotator::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.SkyStateOverrideCelestialPointOfInterestAlignToRotator");
    return (USkyStateOverrideCelestialPointOfInterestAlignToRotator*)res;
}
void USkyStateOverrideCelestialPointOfInterestAlignToRotator::SetExtraRotation(FRotator NewExtra) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyStateOverrideCelestialPointOfInterestAlignToRotator.SetExtraRotation"));
    struct Params_SetExtraRotation {
        FRotator NewExtra; // 0x0
    }; // Size: 0xc
    Params_SetExtraRotation params{};
    params.NewExtra = (FRotator)NewExtra;
    ProcessEvent(func, &params);
}
void USkyStateOverrideCelestialPointOfInterestAlignToRotator::SetOrientTo(FRotator NewOrientTo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyStateOverrideCelestialPointOfInterestAlignToRotator.SetOrientTo"));
    struct Params_SetOrientTo {
        FRotator NewOrientTo; // 0x0
    }; // Size: 0xc
    Params_SetOrientTo params{};
    params.NewOrientTo = (FRotator)NewOrientTo;
    ProcessEvent(func, &params);
}
void USkyStateOverrideCelestialPointOfInterestAlignToRotator::GetOrientTo(FRotator& CurrentOrientTo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyStateOverrideCelestialPointOfInterestAlignToRotator.GetOrientTo"));
    struct Params_GetOrientTo {
        FRotator CurrentOrientTo; // 0x0
    }; // Size: 0xc
    Params_GetOrientTo params{};
    params.CurrentOrientTo = (FRotator)CurrentOrientTo;
    ProcessEvent(func, &params);
    CurrentOrientTo = params.CurrentOrientTo;
}
void USkyStateOverrideCelestialPointOfInterestAlignToRotator::ClearExtraRotation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyStateOverrideCelestialPointOfInterestAlignToRotator.ClearExtraRotation"));
    struct Params_ClearExtraRotation {
    }; // Size: 0x0
    Params_ClearExtraRotation params{};
    ProcessEvent(func, &params);
}
void USkyStateOverrideCelestialPointOfInterestAlignToRotator::GetExtraRotation(FRotator& CurrentExtra, bool& bHasExtra) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.SkyStateOverrideCelestialPointOfInterestAlignToRotator.GetExtraRotation"));
    struct Params_GetExtraRotation {
        FRotator CurrentExtra; // 0x0
        bool bHasExtra; // 0xc
    }; // Size: 0xd
    Params_GetExtraRotation params{};
    params.CurrentExtra = (FRotator)CurrentExtra;
    params.bHasExtra = (bool)bHasExtra;
    ProcessEvent(func, &params);
    CurrentExtra = params.CurrentExtra;
    bHasExtra = params.bHasExtra;
}

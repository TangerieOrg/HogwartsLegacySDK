#include "EDayNightEventDirection.hpp"
#include "EMoonPhaseName.hpp"
#include "FDateTime.hpp"
#include "FSolarNormalizedTime.hpp"
#include "UDayNightEventInterface.hpp"
#include "UDayNightMasterComponent.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UDayNightEventInterface* UDayNightEventInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightEventInterface");
    return (UDayNightEventInterface*)res;
}
void UDayNightEventInterface::DayNightSunEvent(UDayNightMasterComponent* DayNightMaster, FName EventName, FSolarNormalizedTime NormalizedTime, FDateTime GameTime, EDayNightEventDirection SunDirection, float SunAltitudeDegrees, bool bLate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEventInterface.DayNightSunEvent"));
    struct Params_DayNightSunEvent {
        UDayNightMasterComponent* DayNightMaster; // 0x0
        FName EventName; // 0x8
        FSolarNormalizedTime NormalizedTime; // 0x10
        char pad_14[0x4];
        FDateTime GameTime; // 0x18
        EDayNightEventDirection SunDirection; // 0x20
        char pad_21[0x3];
        float SunAltitudeDegrees; // 0x24
        bool bLate; // 0x28
    }; // Size: 0x29
    Params_DayNightSunEvent params{};
    params.DayNightMaster = (UDayNightMasterComponent*)DayNightMaster;
    params.EventName = (FName)EventName;
    params.NormalizedTime = (FSolarNormalizedTime)NormalizedTime;
    params.GameTime = (FDateTime)GameTime;
    params.SunDirection = (EDayNightEventDirection)SunDirection;
    params.SunAltitudeDegrees = (float)SunAltitudeDegrees;
    params.bLate = (bool)bLate;
    ProcessEvent(func, &params);
}
void UDayNightEventInterface::DayNightMoonEvent(UDayNightMasterComponent* DayNightMaster, FName EventName, FSolarNormalizedTime NormalizedTime, FDateTime GameTime, EDayNightEventDirection MoonDirection, float MoonAltitudeDegrees, EMoonPhaseName Phase, bool bLate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.DayNightEventInterface.DayNightMoonEvent"));
    struct Params_DayNightMoonEvent {
        UDayNightMasterComponent* DayNightMaster; // 0x0
        FName EventName; // 0x8
        FSolarNormalizedTime NormalizedTime; // 0x10
        char pad_14[0x4];
        FDateTime GameTime; // 0x18
        EDayNightEventDirection MoonDirection; // 0x20
        char pad_21[0x3];
        float MoonAltitudeDegrees; // 0x24
        EMoonPhaseName Phase; // 0x28
        bool bLate; // 0x29
    }; // Size: 0x2a
    Params_DayNightMoonEvent params{};
    params.DayNightMaster = (UDayNightMasterComponent*)DayNightMaster;
    params.EventName = (FName)EventName;
    params.NormalizedTime = (FSolarNormalizedTime)NormalizedTime;
    params.GameTime = (FDateTime)GameTime;
    params.MoonDirection = (EDayNightEventDirection)MoonDirection;
    params.MoonAltitudeDegrees = (float)MoonAltitudeDegrees;
    params.Phase = (EMoonPhaseName)Phase;
    params.bLate = (bool)bLate;
    ProcessEvent(func, &params);
}

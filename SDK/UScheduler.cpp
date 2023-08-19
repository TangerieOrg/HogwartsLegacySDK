#include "ESchedulerMoonPhase.hpp"
#include "ESchedulerTimeDateType.hpp"
#include "ESeasonEnum.hpp"
#include "FDateTime.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UScheduler.hpp"
void UScheduler::SetSimulationTimeFactorOverride(float Factor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.SetSimulationTimeFactorOverride"));
    struct Params_SetSimulationTimeFactorOverride {
        float Factor; // 0x0
    }; // Size: 0x4
    Params_SetSimulationTimeFactorOverride params{};
    params.Factor = (float)Factor;
    ProcessEvent(func, &params);
}
int32_t UScheduler::GetHourOfTheDay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetHourOfTheDay"));
    struct Params_GetHourOfTheDay {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetHourOfTheDay params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UScheduler::GetStringTimeMinutes(FString TimeString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetStringTimeMinutes"));
    struct Params_GetStringTimeMinutes {
        FString TimeString; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetStringTimeMinutes params{};
    params.TimeString = (FString)TimeString;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UScheduler* UScheduler::StaticClass() {
    static auto res = find_uobject("Class /Script/GameScheduler.Scheduler");
    return (UScheduler*)res;
}
void UScheduler::StopTime(bool InStop, FName InLockName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.StopTime"));
    struct Params_StopTime {
        bool InStop; // 0x0
        char pad_1[0x3];
        FName InLockName; // 0x4
    }; // Size: 0xc
    Params_StopTime params{};
    params.InStop = (bool)InStop;
    params.InLockName = (FName)InLockName;
    ProcessEvent(func, &params);
}
bool UScheduler::RemoveRegisteredEvent(int32_t InHandle, bool bInAssertIfNotFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.RemoveRegisteredEvent"));
    struct Params_RemoveRegisteredEvent {
        int32_t InHandle; // 0x0
        bool bInAssertIfNotFound; // 0x4
        bool ReturnValue; // 0x5
    }; // Size: 0x6
    Params_RemoveRegisteredEvent params{};
    params.InHandle = (int32_t)InHandle;
    params.bInAssertIfNotFound = (bool)bInAssertIfNotFound;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UScheduler::Hide(bool bInHide) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.Hide"));
    struct Params_Hide {
        bool bInHide; // 0x0
    }; // Size: 0x1
    Params_Hide params{};
    params.bInHide = (bool)bInHide;
    ProcessEvent(func, &params);
}
void UScheduler::StartNewDay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.StartNewDay"));
    struct Params_StartNewDay {
    }; // Size: 0x0
    Params_StartNewDay params{};
    ProcessEvent(func, &params);
}
void UScheduler::SetCurrentTime(int32_t InHours, int32_t InMinutes, int32_t InSeconds, int32_t Month, int32_t Day, int32_t Year) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.SetCurrentTime"));
    struct Params_SetCurrentTime {
        int32_t InHours; // 0x0
        int32_t InMinutes; // 0x4
        int32_t InSeconds; // 0x8
        int32_t Month; // 0xc
        int32_t Day; // 0x10
        int32_t Year; // 0x14
    }; // Size: 0x18
    Params_SetCurrentTime params{};
    params.InHours = (int32_t)InHours;
    params.InMinutes = (int32_t)InMinutes;
    params.InSeconds = (int32_t)InSeconds;
    params.Month = (int32_t)Month;
    params.Day = (int32_t)Day;
    params.Year = (int32_t)Year;
    ProcessEvent(func, &params);
}
void UScheduler::RegisterNewTimeEventBP() {}
int32_t UScheduler::GetSecondOfTheDay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetSecondOfTheDay"));
    struct Params_GetSecondOfTheDay {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSecondOfTheDay params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UScheduler::Pause(bool bInPause) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.Pause"));
    struct Params_Pause {
        bool bInPause; // 0x0
    }; // Size: 0x1
    Params_Pause params{};
    params.bInPause = (bool)bInPause;
    ProcessEvent(func, &params);
}
void UScheduler::AdvanceTime(int32_t InDays, int32_t InHours, int32_t InMinutes, int32_t InSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.AdvanceTime"));
    struct Params_AdvanceTime {
        int32_t InDays; // 0x0
        int32_t InHours; // 0x4
        int32_t InMinutes; // 0x8
        int32_t InSeconds; // 0xc
    }; // Size: 0x10
    Params_AdvanceTime params{};
    params.InDays = (int32_t)InDays;
    params.InHours = (int32_t)InHours;
    params.InMinutes = (int32_t)InMinutes;
    params.InSeconds = (int32_t)InSeconds;
    ProcessEvent(func, &params);
}
void UScheduler::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
void UScheduler::OnGameToBeSaved() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.OnGameToBeSaved"));
    struct Params_OnGameToBeSaved {
    }; // Size: 0x0
    Params_OnGameToBeSaved params{};
    ProcessEvent(func, &params);
}
int32_t UScheduler::GetSimulatedMonthBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetSimulatedMonthBP"));
    struct Params_GetSimulatedMonthBP {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSimulatedMonthBP params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UScheduler::GetSimulationTimeFactorOverride() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetSimulationTimeFactorOverride"));
    struct Params_GetSimulationTimeFactorOverride {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSimulationTimeFactorOverride params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UScheduler::IsNowInBetweenStringTimes(FString StartTimeString, FString EndTimeString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.IsNowInBetweenStringTimes"));
    struct Params_IsNowInBetweenStringTimes {
        FString StartTimeString; // 0x0
        FString EndTimeString; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_IsNowInBetweenStringTimes params{};
    params.StartTimeString = (FString)StartTimeString;
    params.EndTimeString = (FString)EndTimeString;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UScheduler::IsNight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.IsNight"));
    struct Params_IsNight {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsNight params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UScheduler::GetSimulatedYearBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetSimulatedYearBP"));
    struct Params_GetSimulatedYearBP {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSimulatedYearBP params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UScheduler::IsDay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.IsDay"));
    struct Params_IsDay {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDay params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UScheduler::GetSimulatedTime24BP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetSimulatedTime24BP"));
    struct Params_GetSimulatedTime24BP {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSimulatedTime24BP params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UScheduler::IsClockStopped() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.IsClockStopped"));
    struct Params_IsClockStopped {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsClockStopped params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UScheduler::GetTotalSeconds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetTotalSeconds"));
    struct Params_GetTotalSeconds {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTotalSeconds params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UScheduler::InitiateEndOfDay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.InitiateEndOfDay"));
    struct Params_InitiateEndOfDay {
    }; // Size: 0x0
    Params_InitiateEndOfDay params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
int32_t UScheduler::GetTimeDelta(int32_t In24HourTimeA, int32_t In24HourTimeB) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetTimeDelta"));
    struct Params_GetTimeDelta {
        int32_t In24HourTimeA; // 0x0
        int32_t In24HourTimeB; // 0x4
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetTimeDelta params{};
    params.In24HourTimeA = (int32_t)In24HourTimeA;
    params.In24HourTimeB = (int32_t)In24HourTimeB;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FDateTime UScheduler::GetSimulatedTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetSimulatedTime"));
    struct Params_GetSimulatedTime {
        FDateTime ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSimulatedTime params{};
    ProcessEvent(func, &params);
    return (FDateTime)params.ReturnValue;
}
ESchedulerMoonPhase UScheduler::GetMoonPhaseBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetMoonPhaseBP"));
    struct Params_GetMoonPhaseBP {
        ESchedulerMoonPhase ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMoonPhaseBP params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ESchedulerMoonPhase)params.ReturnValue;
}
float UScheduler::GetSimulatedSecondMultiplier() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetSimulatedSecondMultiplier"));
    struct Params_GetSimulatedSecondMultiplier {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSimulatedSecondMultiplier params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UScheduler::AdvanceSeconds(int32_t InSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.AdvanceSeconds"));
    struct Params_AdvanceSeconds {
        int32_t InSeconds; // 0x0
    }; // Size: 0x4
    Params_AdvanceSeconds params{};
    params.InSeconds = (int32_t)InSeconds;
    ProcessEvent(func, &params);
}
int32_t UScheduler::GetSimulatedSecondBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetSimulatedSecondBP"));
    struct Params_GetSimulatedSecondBP {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSimulatedSecondBP params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UScheduler::GetSimulatedMinuteBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetSimulatedMinuteBP"));
    struct Params_GetSimulatedMinuteBP {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSimulatedMinuteBP params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UScheduler::GetSimulatedHourBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetSimulatedHourBP"));
    struct Params_GetSimulatedHourBP {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSimulatedHourBP params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UScheduler::GetSimulatedDayBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetSimulatedDayBP"));
    struct Params_GetSimulatedDayBP {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSimulatedDayBP params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FDateTime UScheduler::GetSimulateDateTimeBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetSimulateDateTimeBP"));
    struct Params_GetSimulateDateTimeBP {
        FDateTime ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSimulateDateTimeBP params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FDateTime)params.ReturnValue;
}
bool UScheduler::GetActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetActive"));
    struct Params_GetActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetActive params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UScheduler::GetSimlatedTimeDateType(ESchedulerTimeDateType InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetSimlatedTimeDateType"));
    struct Params_GetSimlatedTimeDateType {
        ESchedulerTimeDateType InType; // 0x0
        char pad_1[0x7];
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetSimlatedTimeDateType params{};
    params.InType = (ESchedulerTimeDateType)InType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UScheduler::AdvanceHours(int32_t InHours) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.AdvanceHours"));
    struct Params_AdvanceHours {
        int32_t InHours; // 0x0
    }; // Size: 0x4
    Params_AdvanceHours params{};
    params.InHours = (int32_t)InHours;
    ProcessEvent(func, &params);
}
FDateTime UScheduler::GetNurtureTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetNurtureTime"));
    struct Params_GetNurtureTime {
        FDateTime ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetNurtureTime params{};
    ProcessEvent(func, &params);
    return (FDateTime)params.ReturnValue;
}
int32_t UScheduler::GetMonthOfTheYear() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetMonthOfTheYear"));
    struct Params_GetMonthOfTheYear {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMonthOfTheYear params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UScheduler::GetDayOfTheWeek() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetDayOfTheWeek"));
    struct Params_GetDayOfTheWeek {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDayOfTheWeek params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UScheduler::GetMinuteOfTheDay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetMinuteOfTheDay"));
    struct Params_GetMinuteOfTheDay {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetMinuteOfTheDay params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UScheduler::GetHourAndMinutesFromString(FString TimeString, int32_t& o_Hour, int32_t& o_Minute) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetHourAndMinutesFromString"));
    struct Params_GetHourAndMinutesFromString {
        FString TimeString; // 0x0
        int32_t o_Hour; // 0x10
        int32_t o_Minute; // 0x14
    }; // Size: 0x18
    Params_GetHourAndMinutesFromString params{};
    params.TimeString = (FString)TimeString;
    params.o_Hour = (int32_t)o_Hour;
    params.o_Minute = (int32_t)o_Minute;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    o_Hour = params.o_Hour;
    o_Minute = params.o_Minute;
}
void UScheduler::AdvanceDays(int32_t InDays) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.AdvanceDays"));
    struct Params_AdvanceDays {
        int32_t InDays; // 0x0
    }; // Size: 0x4
    Params_AdvanceDays params{};
    params.InDays = (int32_t)InDays;
    ProcessEvent(func, &params);
}
int32_t UScheduler::GetDayOfTheYear() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetDayOfTheYear"));
    struct Params_GetDayOfTheYear {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDayOfTheYear params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UScheduler::GetDayOfTheMonth() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetDayOfTheMonth"));
    struct Params_GetDayOfTheMonth {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDayOfTheMonth params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UScheduler::AdvanceMinutes(int32_t InMinutes) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.AdvanceMinutes"));
    struct Params_AdvanceMinutes {
        int32_t InMinutes; // 0x0
    }; // Size: 0x4
    Params_AdvanceMinutes params{};
    params.InMinutes = (int32_t)InMinutes;
    ProcessEvent(func, &params);
}
ESeasonEnum UScheduler::GetCurrentSeason() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetCurrentSeason"));
    struct Params_GetCurrentSeason {
        ESeasonEnum ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCurrentSeason params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ESeasonEnum)params.ReturnValue;
}
UScheduler* UScheduler::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.Get"));
    struct Params_Get {
        UScheduler* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UScheduler*)params.ReturnValue;
}
int32_t UScheduler::GetCalendarYear() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.GetCalendarYear"));
    struct Params_GetCalendarYear {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCalendarYear params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UScheduler::BeginFirstDay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.BeginFirstDay"));
    struct Params_BeginFirstDay {
    }; // Size: 0x0
    Params_BeginFirstDay params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UScheduler::AdvanceTimeTo(int32_t InDays, int32_t InHours, int32_t InMinutes, int32_t InSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.AdvanceTimeTo"));
    struct Params_AdvanceTimeTo {
        int32_t InDays; // 0x0
        int32_t InHours; // 0x4
        int32_t InMinutes; // 0x8
        int32_t InSeconds; // 0xc
    }; // Size: 0x10
    Params_AdvanceTimeTo params{};
    params.InDays = (int32_t)InDays;
    params.InHours = (int32_t)InHours;
    params.InMinutes = (int32_t)InMinutes;
    params.InSeconds = (int32_t)InSeconds;
    ProcessEvent(func, &params);
}
void UScheduler::AdvanceNurtureTime(int32_t InDays, int32_t InHours, int32_t InMinutes, int32_t InSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameScheduler.Scheduler.AdvanceNurtureTime"));
    struct Params_AdvanceNurtureTime {
        int32_t InDays; // 0x0
        int32_t InHours; // 0x4
        int32_t InMinutes; // 0x8
        int32_t InSeconds; // 0xc
    }; // Size: 0x10
    Params_AdvanceNurtureTime params{};
    params.InDays = (int32_t)InDays;
    params.InHours = (int32_t)InHours;
    params.InMinutes = (int32_t)InMinutes;
    params.InSeconds = (int32_t)InSeconds;
    ProcessEvent(func, &params);
}

#pragma once
#include <cstdint>
#include "ESchedulerMoonPhase.hpp"
#include "ESchedulerTimeDateType.hpp"
#include "ESeasonEnum.hpp"
#include "FDateTime.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UScheduler : public UObject {
public:
    char pad_28[0x8ba8];
    static UScheduler* StaticClass();
    void StopTime(bool InStop, FName InLockName);
    void StartNewDay();
    void SetSimulationTimeFactorOverride(float Factor);
    void SetCurrentTime(int32_t InHours, int32_t InMinutes, int32_t InSeconds, int32_t Month, int32_t Day, int32_t Year);
    bool RemoveRegisteredEvent(int32_t InHandle, bool bInAssertIfNotFound);
    void RegisterNewTimeEventBP();
    void Pause(bool bInPause);
    void OnSaveGameLoaded();
    void OnGameToBeSaved();
    static bool IsNowInBetweenStringTimes(FString StartTimeString, FString EndTimeString);
    bool IsNight();
    bool IsDay();
    bool IsClockStopped();
    static void InitiateEndOfDay();
    void Hide(bool bInHide);
    float GetTotalSeconds();
    static int32_t GetTimeDelta(int32_t In24HourTimeA, int32_t In24HourTimeB);
    static int32_t GetStringTimeMinutes(FString TimeString);
    float GetSimulationTimeFactorOverride();
    static int32_t GetSimulatedYearBP();
    static int32_t GetSimulatedTime24BP();
    FDateTime GetSimulatedTime();
    float GetSimulatedSecondMultiplier();
    static int32_t GetSimulatedSecondBP();
    static int32_t GetSimulatedMonthBP();
    static int32_t GetSimulatedMinuteBP();
    static int32_t GetSimulatedHourBP();
    static int32_t GetSimulatedDayBP();
    static FDateTime GetSimulateDateTimeBP();
    static FString GetSimlatedTimeDateType(ESchedulerTimeDateType InType);
    int32_t GetSecondOfTheDay();
    FDateTime GetNurtureTime();
    static ESchedulerMoonPhase GetMoonPhaseBP();
    int32_t GetMonthOfTheYear();
    int32_t GetMinuteOfTheDay();
    int32_t GetHourOfTheDay();
    static void GetHourAndMinutesFromString(FString TimeString, int32_t& o_Hour, int32_t& o_Minute);
    int32_t GetDayOfTheYear();
    int32_t GetDayOfTheWeek();
    int32_t GetDayOfTheMonth();
    static ESeasonEnum GetCurrentSeason();
    int32_t GetCalendarYear();
    static bool GetActive();
    static UScheduler* Get();
    static void BeginFirstDay();
    void AdvanceTimeTo(int32_t InDays, int32_t InHours, int32_t InMinutes, int32_t InSeconds);
    void AdvanceTime(int32_t InDays, int32_t InHours, int32_t InMinutes, int32_t InSeconds);
    void AdvanceSeconds(int32_t InSeconds);
    void AdvanceNurtureTime(int32_t InDays, int32_t InHours, int32_t InMinutes, int32_t InSeconds);
    void AdvanceMinutes(int32_t InMinutes);
    void AdvanceHours(int32_t InHours);
    void AdvanceDays(int32_t InDays);
}; // Size: 0x8bd0
#pragma pack(pop)

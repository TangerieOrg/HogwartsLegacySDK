#pragma once
#include <cstdint>
#include "EQuartzCommandQuantization.hpp"
#include "FQuartzQuantizationBoundary.hpp"
#include "FQuartzTransportTimeStamp.hpp"
#include "UObject.hpp"
class UQuartzSubsystem;
class UWorld;
#pragma pack(push, 1)
class UQuartzClockHandle : public UObject {
public:
    char pad_28[0x140];
    UQuartzSubsystem* QuartzSubsystem; // 0x168
    char pad_170[0x18];
    UWorld* WorldPtr; // 0x188
    static UQuartzClockHandle* StaticClass();
    void UnsubscribeFromTimeDivision(UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, UQuartzClockHandle*& ClockHandle);
    void UnsubscribeFromAllTimeDivisions(UObject* WorldContextObject, UQuartzClockHandle*& ClockHandle);
    void SubscribeToQuantizationEvent(UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary);
    void SubscribeToAllQuantizationEvents(UObject* WorldContextObject);
    void StopClock(UObject* WorldContextObject, bool CancelPendingEvents, UQuartzClockHandle*& ClockHandle);
    void StartOtherClock(UObject* WorldContextObject, FName OtherClockName, FQuartzQuantizationBoundary InQuantizationBoundary);
    void StartClock(UObject* WorldContextObject, UQuartzClockHandle*& ClockHandle);
    void SetTicksPerSecond(UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary);
    void SetThirtySecondNotesPerMinute(UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary);
    void SetSecondsPerTick(UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary);
    void SetMillisecondsPerTick(UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary);
    void SetBeatsPerMinute(UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary);
    void ResumeClock(UObject* WorldContextObject, UQuartzClockHandle*& ClockHandle);
    void ResetTransportQuantized(UObject* WorldContextObject, FQuartzQuantizationBoundary InQuantizationBoundary);
    void ResetTransport(UObject* WorldContextObject);
    void PauseClock(UObject* WorldContextObject, UQuartzClockHandle*& ClockHandle);
    bool IsClockRunning(UObject* WorldContextObject);
    float GetTicksPerSecond(UObject* WorldContextObject);
    float GetThirtySecondNotesPerMinute(UObject* WorldContextObject);
    float GetSecondsPerTick(UObject* WorldContextObject);
    float GetMillisecondsPerTick(UObject* WorldContextObject);
    float GetEstimatedRunTime(UObject* WorldContextObject);
    float GetDurationOfQuantizationTypeInSeconds(UObject* WorldContextObject, EQuartzCommandQuantization& QuantizationType, float Multiplier);
    FQuartzTransportTimeStamp GetCurrentTimestamp(UObject* WorldContextObject);
    float GetBeatsPerMinute(UObject* WorldContextObject);
}; // Size: 0x190
#pragma pack(pop)

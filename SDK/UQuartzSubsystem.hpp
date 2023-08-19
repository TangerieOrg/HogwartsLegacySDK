#pragma once
#include <cstdint>
#include "EQuartzCommandQuantization.hpp"
#include "FQuartzClockSettings.hpp"
#include "FQuartzTransportTimeStamp.hpp"
#include "UTickableWorldSubsystem.hpp"
class UObject;
class UQuartzClockHandle;
#pragma pack(push, 1)
class UQuartzSubsystem : public UTickableWorldSubsystem {
public:
    char pad_40[0x110];
    static UQuartzSubsystem* StaticClass();
    bool IsQuartzEnabled();
    bool IsClockRunning(UObject* WorldContextObject, FName ClockName);
    float GetRoundTripMinLatency(UObject* WorldContextObject);
    float GetRoundTripMaxLatency(UObject* WorldContextObject);
    float GetRoundTripAverageLatency(UObject* WorldContextObject);
    UQuartzClockHandle* GetHandleForClock(UObject* WorldContextObject, FName ClockName);
    float GetGameThreadToAudioRenderThreadMinLatency(UObject* WorldContextObject);
    float GetGameThreadToAudioRenderThreadMaxLatency(UObject* WorldContextObject);
    float GetGameThreadToAudioRenderThreadAverageLatency(UObject* WorldContextObject);
    float GetEstimatedClockRunTime(UObject* WorldContextObject, FName& InClockName);
    float GetDurationOfQuantizationTypeInSeconds(UObject* WorldContextObject, FName ClockName, EQuartzCommandQuantization& QuantizationType, float Multiplier);
    FQuartzTransportTimeStamp GetCurrentClockTimestamp(UObject* WorldContextObject, FName& InClockName);
    float GetAudioRenderThreadToGameThreadMinLatency();
    float GetAudioRenderThreadToGameThreadMaxLatency();
    float GetAudioRenderThreadToGameThreadAverageLatency();
    bool DoesClockExist(UObject* WorldContextObject, FName ClockName);
    void DeleteClockByName(UObject* WorldContextObject, FName ClockName);
    void DeleteClockByHandle(UObject* WorldContextObject, UQuartzClockHandle*& InClockHandle);
    UQuartzClockHandle* CreateNewClock(UObject* WorldContextObject, FName ClockName, FQuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager);
}; // Size: 0x150
#pragma pack(pop)

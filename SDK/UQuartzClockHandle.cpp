#include "EQuartzCommandQuantization.hpp"
#include "FQuartzQuantizationBoundary.hpp"
#include "FQuartzTransportTimeStamp.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UQuartzClockHandle.hpp"
#include "UQuartzSubsystem.hpp"
#include "UWorld.hpp"
UQuartzClockHandle* UQuartzClockHandle::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioMixer.QuartzClockHandle");
    return (UQuartzClockHandle*)res;
}
void UQuartzClockHandle::SubscribeToQuantizationEvent(UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary) {}
void UQuartzClockHandle::ResetTransportQuantized(UObject* WorldContextObject, FQuartzQuantizationBoundary InQuantizationBoundary) {}
void UQuartzClockHandle::UnsubscribeFromTimeDivision(UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, UQuartzClockHandle*& ClockHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision"));
    struct Params_UnsubscribeFromTimeDivision {
        UObject* WorldContextObject; // 0x0
        EQuartzCommandQuantization InQuantizationBoundary; // 0x8
        char pad_9[0x7];
        UQuartzClockHandle* ClockHandle; // 0x10
    }; // Size: 0x18
    Params_UnsubscribeFromTimeDivision params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.InQuantizationBoundary = (EQuartzCommandQuantization)InQuantizationBoundary;
    params.ClockHandle = (UQuartzClockHandle*)ClockHandle;
    ProcessEvent(func, &params);
    ClockHandle = params.ClockHandle;
}
void UQuartzClockHandle::StartClock(UObject* WorldContextObject, UQuartzClockHandle*& ClockHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzClockHandle.StartClock"));
    struct Params_StartClock {
        UObject* WorldContextObject; // 0x0
        UQuartzClockHandle* ClockHandle; // 0x8
    }; // Size: 0x10
    Params_StartClock params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ClockHandle = (UQuartzClockHandle*)ClockHandle;
    ProcessEvent(func, &params);
    ClockHandle = params.ClockHandle;
}
float UQuartzClockHandle::GetBeatsPerMinute(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzClockHandle.GetBeatsPerMinute"));
    struct Params_GetBeatsPerMinute {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetBeatsPerMinute params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UQuartzClockHandle::UnsubscribeFromAllTimeDivisions(UObject* WorldContextObject, UQuartzClockHandle*& ClockHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions"));
    struct Params_UnsubscribeFromAllTimeDivisions {
        UObject* WorldContextObject; // 0x0
        UQuartzClockHandle* ClockHandle; // 0x8
    }; // Size: 0x10
    Params_UnsubscribeFromAllTimeDivisions params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ClockHandle = (UQuartzClockHandle*)ClockHandle;
    ProcessEvent(func, &params);
    ClockHandle = params.ClockHandle;
}
void UQuartzClockHandle::SubscribeToAllQuantizationEvents(UObject* WorldContextObject) {}
void UQuartzClockHandle::StartOtherClock(UObject* WorldContextObject, FName OtherClockName, FQuartzQuantizationBoundary InQuantizationBoundary) {}
void UQuartzClockHandle::StopClock(UObject* WorldContextObject, bool CancelPendingEvents, UQuartzClockHandle*& ClockHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzClockHandle.StopClock"));
    struct Params_StopClock {
        UObject* WorldContextObject; // 0x0
        bool CancelPendingEvents; // 0x8
        char pad_9[0x7];
        UQuartzClockHandle* ClockHandle; // 0x10
    }; // Size: 0x18
    Params_StopClock params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.CancelPendingEvents = (bool)CancelPendingEvents;
    params.ClockHandle = (UQuartzClockHandle*)ClockHandle;
    ProcessEvent(func, &params);
    ClockHandle = params.ClockHandle;
}
void UQuartzClockHandle::PauseClock(UObject* WorldContextObject, UQuartzClockHandle*& ClockHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzClockHandle.PauseClock"));
    struct Params_PauseClock {
        UObject* WorldContextObject; // 0x0
        UQuartzClockHandle* ClockHandle; // 0x8
    }; // Size: 0x10
    Params_PauseClock params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ClockHandle = (UQuartzClockHandle*)ClockHandle;
    ProcessEvent(func, &params);
    ClockHandle = params.ClockHandle;
}
void UQuartzClockHandle::SetTicksPerSecond(UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary) {}
void UQuartzClockHandle::SetThirtySecondNotesPerMinute(UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary) {}
void UQuartzClockHandle::SetSecondsPerTick(UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary) {}
void UQuartzClockHandle::SetMillisecondsPerTick(UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary) {}
float UQuartzClockHandle::GetTicksPerSecond(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzClockHandle.GetTicksPerSecond"));
    struct Params_GetTicksPerSecond {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetTicksPerSecond params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UQuartzClockHandle::SetBeatsPerMinute(UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary) {}
void UQuartzClockHandle::ResumeClock(UObject* WorldContextObject, UQuartzClockHandle*& ClockHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzClockHandle.ResumeClock"));
    struct Params_ResumeClock {
        UObject* WorldContextObject; // 0x0
        UQuartzClockHandle* ClockHandle; // 0x8
    }; // Size: 0x10
    Params_ResumeClock params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ClockHandle = (UQuartzClockHandle*)ClockHandle;
    ProcessEvent(func, &params);
    ClockHandle = params.ClockHandle;
}
void UQuartzClockHandle::ResetTransport(UObject* WorldContextObject) {}
bool UQuartzClockHandle::IsClockRunning(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzClockHandle.IsClockRunning"));
    struct Params_IsClockRunning {
        UObject* WorldContextObject; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsClockRunning params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UQuartzClockHandle::GetThirtySecondNotesPerMinute(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute"));
    struct Params_GetThirtySecondNotesPerMinute {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetThirtySecondNotesPerMinute params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UQuartzClockHandle::GetSecondsPerTick(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzClockHandle.GetSecondsPerTick"));
    struct Params_GetSecondsPerTick {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetSecondsPerTick params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UQuartzClockHandle::GetMillisecondsPerTick(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzClockHandle.GetMillisecondsPerTick"));
    struct Params_GetMillisecondsPerTick {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetMillisecondsPerTick params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UQuartzClockHandle::GetEstimatedRunTime(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzClockHandle.GetEstimatedRunTime"));
    struct Params_GetEstimatedRunTime {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetEstimatedRunTime params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UQuartzClockHandle::GetDurationOfQuantizationTypeInSeconds(UObject* WorldContextObject, EQuartzCommandQuantization& QuantizationType, float Multiplier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzClockHandle.GetDurationOfQuantizationTypeInSeconds"));
    struct Params_GetDurationOfQuantizationTypeInSeconds {
        UObject* WorldContextObject; // 0x0
        EQuartzCommandQuantization QuantizationType; // 0x8
        char pad_9[0x3];
        float Multiplier; // 0xc
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetDurationOfQuantizationTypeInSeconds params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.QuantizationType = (EQuartzCommandQuantization)QuantizationType;
    params.Multiplier = (float)Multiplier;
    ProcessEvent(func, &params);
    QuantizationType = params.QuantizationType;
    return (float)params.ReturnValue;
}
FQuartzTransportTimeStamp UQuartzClockHandle::GetCurrentTimestamp(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzClockHandle.GetCurrentTimestamp"));
    struct Params_GetCurrentTimestamp {
        UObject* WorldContextObject; // 0x0
        FQuartzTransportTimeStamp ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetCurrentTimestamp params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ProcessEvent(func, &params);
    return (FQuartzTransportTimeStamp)params.ReturnValue;
}

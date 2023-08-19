#include "EQuartzCommandQuantization.hpp"
#include "FQuartzClockSettings.hpp"
#include "FQuartzTransportTimeStamp.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UQuartzClockHandle.hpp"
#include "UQuartzSubsystem.hpp"
#include "UTickableWorldSubsystem.hpp"
float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMinLatency(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency"));
    struct Params_GetGameThreadToAudioRenderThreadMinLatency {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetGameThreadToAudioRenderThreadMinLatency params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UQuartzSubsystem* UQuartzSubsystem::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioMixer.QuartzSubsystem");
    return (UQuartzSubsystem*)res;
}
bool UQuartzSubsystem::IsClockRunning(UObject* WorldContextObject, FName ClockName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzSubsystem.IsClockRunning"));
    struct Params_IsClockRunning {
        UObject* WorldContextObject; // 0x0
        FName ClockName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsClockRunning params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ClockName = (FName)ClockName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UQuartzSubsystem::IsQuartzEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzSubsystem.IsQuartzEnabled"));
    struct Params_IsQuartzEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsQuartzEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UQuartzSubsystem::GetRoundTripMinLatency(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzSubsystem.GetRoundTripMinLatency"));
    struct Params_GetRoundTripMinLatency {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetRoundTripMinLatency params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UQuartzSubsystem::GetRoundTripAverageLatency(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency"));
    struct Params_GetRoundTripAverageLatency {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetRoundTripAverageLatency params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UQuartzSubsystem::GetRoundTripMaxLatency(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency"));
    struct Params_GetRoundTripMaxLatency {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetRoundTripMaxLatency params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UQuartzClockHandle* UQuartzSubsystem::GetHandleForClock(UObject* WorldContextObject, FName ClockName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzSubsystem.GetHandleForClock"));
    struct Params_GetHandleForClock {
        UObject* WorldContextObject; // 0x0
        FName ClockName; // 0x8
        UQuartzClockHandle* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetHandleForClock params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ClockName = (FName)ClockName;
    ProcessEvent(func, &params);
    return (UQuartzClockHandle*)params.ReturnValue;
}
float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMaxLatency(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency"));
    struct Params_GetGameThreadToAudioRenderThreadMaxLatency {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetGameThreadToAudioRenderThreadMaxLatency params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UQuartzSubsystem::GetGameThreadToAudioRenderThreadAverageLatency(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency"));
    struct Params_GetGameThreadToAudioRenderThreadAverageLatency {
        UObject* WorldContextObject; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetGameThreadToAudioRenderThreadAverageLatency params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UQuartzSubsystem::GetEstimatedClockRunTime(UObject* WorldContextObject, FName& InClockName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzSubsystem.GetEstimatedClockRunTime"));
    struct Params_GetEstimatedClockRunTime {
        UObject* WorldContextObject; // 0x0
        FName InClockName; // 0x8
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetEstimatedClockRunTime params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.InClockName = (FName)InClockName;
    ProcessEvent(func, &params);
    InClockName = params.InClockName;
    return (float)params.ReturnValue;
}
float UQuartzSubsystem::GetDurationOfQuantizationTypeInSeconds(UObject* WorldContextObject, FName ClockName, EQuartzCommandQuantization& QuantizationType, float Multiplier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzSubsystem.GetDurationOfQuantizationTypeInSeconds"));
    struct Params_GetDurationOfQuantizationTypeInSeconds {
        UObject* WorldContextObject; // 0x0
        FName ClockName; // 0x8
        EQuartzCommandQuantization QuantizationType; // 0x10
        char pad_11[0x3];
        float Multiplier; // 0x14
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_GetDurationOfQuantizationTypeInSeconds params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ClockName = (FName)ClockName;
    params.QuantizationType = (EQuartzCommandQuantization)QuantizationType;
    params.Multiplier = (float)Multiplier;
    ProcessEvent(func, &params);
    QuantizationType = params.QuantizationType;
    return (float)params.ReturnValue;
}
void UQuartzSubsystem::DeleteClockByName(UObject* WorldContextObject, FName ClockName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzSubsystem.DeleteClockByName"));
    struct Params_DeleteClockByName {
        UObject* WorldContextObject; // 0x0
        FName ClockName; // 0x8
    }; // Size: 0x10
    Params_DeleteClockByName params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ClockName = (FName)ClockName;
    ProcessEvent(func, &params);
}
FQuartzTransportTimeStamp UQuartzSubsystem::GetCurrentClockTimestamp(UObject* WorldContextObject, FName& InClockName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzSubsystem.GetCurrentClockTimestamp"));
    struct Params_GetCurrentClockTimestamp {
        UObject* WorldContextObject; // 0x0
        FName InClockName; // 0x8
        FQuartzTransportTimeStamp ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetCurrentClockTimestamp params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.InClockName = (FName)InClockName;
    ProcessEvent(func, &params);
    InClockName = params.InClockName;
    return (FQuartzTransportTimeStamp)params.ReturnValue;
}
float UQuartzSubsystem::GetAudioRenderThreadToGameThreadMinLatency() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency"));
    struct Params_GetAudioRenderThreadToGameThreadMinLatency {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAudioRenderThreadToGameThreadMinLatency params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UQuartzSubsystem::GetAudioRenderThreadToGameThreadMaxLatency() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency"));
    struct Params_GetAudioRenderThreadToGameThreadMaxLatency {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAudioRenderThreadToGameThreadMaxLatency params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UQuartzSubsystem::GetAudioRenderThreadToGameThreadAverageLatency() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency"));
    struct Params_GetAudioRenderThreadToGameThreadAverageLatency {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAudioRenderThreadToGameThreadAverageLatency params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UQuartzSubsystem::DoesClockExist(UObject* WorldContextObject, FName ClockName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzSubsystem.DoesClockExist"));
    struct Params_DoesClockExist {
        UObject* WorldContextObject; // 0x0
        FName ClockName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_DoesClockExist params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ClockName = (FName)ClockName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UQuartzSubsystem::DeleteClockByHandle(UObject* WorldContextObject, UQuartzClockHandle*& InClockHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzSubsystem.DeleteClockByHandle"));
    struct Params_DeleteClockByHandle {
        UObject* WorldContextObject; // 0x0
        UQuartzClockHandle* InClockHandle; // 0x8
    }; // Size: 0x10
    Params_DeleteClockByHandle params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.InClockHandle = (UQuartzClockHandle*)InClockHandle;
    ProcessEvent(func, &params);
    InClockHandle = params.InClockHandle;
}
UQuartzClockHandle* UQuartzSubsystem::CreateNewClock(UObject* WorldContextObject, FName ClockName, FQuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AudioMixer.QuartzSubsystem.CreateNewClock"));
    struct Params_CreateNewClock {
        UObject* WorldContextObject; // 0x0
        FName ClockName; // 0x8
        FQuartzClockSettings InSettings; // 0x10
        bool bOverrideSettingsIfClockExists; // 0x30
        bool bUseAudioEngineClockManager; // 0x31
        char pad_32[0x6];
        UQuartzClockHandle* ReturnValue; // 0x38
    }; // Size: 0x40
    Params_CreateNewClock params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.ClockName = (FName)ClockName;
    params.InSettings = (FQuartzClockSettings)InSettings;
    params.bOverrideSettingsIfClockExists = (bool)bOverrideSettingsIfClockExists;
    params.bUseAudioEngineClockManager = (bool)bUseAudioEngineClockManager;
    ProcessEvent(func, &params);
    return (UQuartzClockHandle*)params.ReturnValue;
}

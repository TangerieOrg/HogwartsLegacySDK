#include "ETimeRigPlayerState.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UTimeRig.hpp"
#include "UTimeRigInstanceContext.hpp"
#include "UTimeRigPlayer.hpp"
UTimeRigPlayer* UTimeRigPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeRig.TimeRigPlayer");
    return (UTimeRigPlayer*)res;
}
void UTimeRigPlayer::SetSecondsRemainingForAlmostCompleteTrigger(float Seconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.SetSecondsRemainingForAlmostCompleteTrigger"));
    struct Params_SetSecondsRemainingForAlmostCompleteTrigger {
        float Seconds; // 0x0
    }; // Size: 0x4
    Params_SetSecondsRemainingForAlmostCompleteTrigger params{};
    params.Seconds = (float)Seconds;
    ProcessEvent(func, &params);
}
void UTimeRigPlayer::SetTime(float Seconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.SetTime"));
    struct Params_SetTime {
        float Seconds; // 0x0
    }; // Size: 0x4
    Params_SetTime params{};
    params.Seconds = (float)Seconds;
    ProcessEvent(func, &params);
}
void UTimeRigPlayer::FastForwardToNextStartOf(UClass* ActionType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.FastForwardToNextStartOf"));
    struct Params_FastForwardToNextStartOf {
        UClass* ActionType; // 0x0
    }; // Size: 0x8
    Params_FastForwardToNextStartOf params{};
    params.ActionType = (UClass*)ActionType;
    ProcessEvent(func, &params);
}
void UTimeRigPlayer::StopIn(float SecondsFromNow, float BlendTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.StopIn"));
    struct Params_StopIn {
        float SecondsFromNow; // 0x0
        float BlendTime; // 0x4
    }; // Size: 0x8
    Params_StopIn params{};
    params.SecondsFromNow = (float)SecondsFromNow;
    params.BlendTime = (float)BlendTime;
    ProcessEvent(func, &params);
}
bool UTimeRigPlayer::IsWantingToPlayButNotPlaying() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.IsWantingToPlayButNotPlaying"));
    struct Params_IsWantingToPlayButNotPlaying {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsWantingToPlayButNotPlaying params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UTimeRigPlayer::SetRoundTimeToFPS(float FPS) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.SetRoundTimeToFPS"));
    struct Params_SetRoundTimeToFPS {
        float FPS; // 0x0
    }; // Size: 0x4
    Params_SetRoundTimeToFPS params{};
    params.FPS = (float)FPS;
    ProcessEvent(func, &params);
}
void UTimeRigPlayer::StopImmediate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.StopImmediate"));
    struct Params_StopImmediate {
    }; // Size: 0x0
    Params_StopImmediate params{};
    ProcessEvent(func, &params);
}
void UTimeRigPlayer::FastForwardToEvent(FName& EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.FastForwardToEvent"));
    struct Params_FastForwardToEvent {
        FName EventName; // 0x0
    }; // Size: 0x8
    Params_FastForwardToEvent params{};
    params.EventName = (FName)EventName;
    ProcessEvent(func, &params);
    EventName = params.EventName;
}
void UTimeRigPlayer::Stop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.Stop"));
    struct Params_Stop {
    }; // Size: 0x0
    Params_Stop params{};
    ProcessEvent(func, &params);
}
bool UTimeRigPlayer::Skip() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.Skip"));
    struct Params_Skip {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_Skip params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UTimeRigPlayer::GetSecondsRemainingForAlmostCompleteTrigger() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.GetSecondsRemainingForAlmostCompleteTrigger"));
    struct Params_GetSecondsRemainingForAlmostCompleteTrigger {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSecondsRemainingForAlmostCompleteTrigger params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UTimeRigPlayer::SetPlaybackScale(float Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.SetPlaybackScale"));
    struct Params_SetPlaybackScale {
        float Scale; // 0x0
    }; // Size: 0x4
    Params_SetPlaybackScale params{};
    params.Scale = (float)Scale;
    ProcessEvent(func, &params);
}
void UTimeRigPlayer::SetOnPlaybackStarting() {}
void UTimeRigPlayer::SetOnPlaybackStarted() {}
bool UTimeRigPlayer::SetLooping(bool LoopingEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.SetLooping"));
    struct Params_SetLooping {
        bool LoopingEnabled; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_SetLooping params{};
    params.LoopingEnabled = (bool)LoopingEnabled;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UTimeRigPlayer::GetPlaybackScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.GetPlaybackScale"));
    struct Params_GetPlaybackScale {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPlaybackScale params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UTimeRigPlayer::RewindToCurrentStartOf(UClass* ActionType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.RewindToCurrentStartOf"));
    struct Params_RewindToCurrentStartOf {
        UClass* ActionType; // 0x0
    }; // Size: 0x8
    Params_RewindToCurrentStartOf params{};
    params.ActionType = (UClass*)ActionType;
    ProcessEvent(func, &params);
}
bool UTimeRigPlayer::ReadyToPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.ReadyToPlay"));
    struct Params_ReadyToPlay {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ReadyToPlay params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UTimeRigPlayer::GetRoundTimeToFPS() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.GetRoundTimeToFPS"));
    struct Params_GetRoundTimeToFPS {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetRoundTimeToFPS params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UTimeRigPlayer::PlayImmediate(FName InActivationSource) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.PlayImmediate"));
    struct Params_PlayImmediate {
        FName InActivationSource; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_PlayImmediate params{};
    params.InActivationSource = (FName)InActivationSource;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UTimeRigPlayer::GetTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.GetTime"));
    struct Params_GetTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UTimeRigPlayer::PlaybackHasStarted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.PlaybackHasStarted"));
    struct Params_PlaybackHasStarted {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_PlaybackHasStarted params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UTimeRigPlayer::Play(FName InActivationSource) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.Play"));
    struct Params_Play {
        FName InActivationSource; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_Play params{};
    params.InActivationSource = (FName)InActivationSource;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UTimeRigPlayer::PauseAfterCurrentEndOf(UClass* ActionType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.PauseAfterCurrentEndOf"));
    struct Params_PauseAfterCurrentEndOf {
        UClass* ActionType; // 0x0
    }; // Size: 0x8
    Params_PauseAfterCurrentEndOf params{};
    params.ActionType = (UClass*)ActionType;
    ProcessEvent(func, &params);
}
void UTimeRigPlayer::Pause() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.Pause"));
    struct Params_Pause {
    }; // Size: 0x0
    Params_Pause params{};
    ProcessEvent(func, &params);
}
bool UTimeRigPlayer::IsTicking() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.IsTicking"));
    struct Params_IsTicking {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsTicking params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UTimeRigPlayer::IsStopping() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.IsStopping"));
    struct Params_IsStopping {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsStopping params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UTimeRigPlayer::IsPlaying() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.IsPlaying"));
    struct Params_IsPlaying {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlaying params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UTimeRigPlayer::IsLooping() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.IsLooping"));
    struct Params_IsLooping {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLooping params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UTimeRigPlayer::IsInitializing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.IsInitializing"));
    struct Params_IsInitializing {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInitializing params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UTimeRigPlayer::IsInitialized() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.IsInitialized"));
    struct Params_IsInitialized {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInitialized params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UTimeRigPlayer::IsActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.IsActive"));
    struct Params_IsActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UTimeRigPlayer::HasEvent(FName EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.HasEvent"));
    struct Params_HasEvent {
        FName EventName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_HasEvent params{};
    params.EventName = (FName)EventName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UTimeRig* UTimeRigPlayer::GetTimeRig() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.GetTimeRig"));
    struct Params_GetTimeRig {
        UTimeRig* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTimeRig params{};
    ProcessEvent(func, &params);
    return (UTimeRig*)params.ReturnValue;
}
ETimeRigPlayerState UTimeRigPlayer::GetPlayerState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.GetPlayerState"));
    struct Params_GetPlayerState {
        ETimeRigPlayerState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPlayerState params{};
    ProcessEvent(func, &params);
    return (ETimeRigPlayerState)params.ReturnValue;
}
float UTimeRigPlayer::GetEndTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.GetEndTime"));
    struct Params_GetEndTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetEndTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UTimeRigPlayer::GetCurrentTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.GetCurrentTime"));
    struct Params_GetCurrentTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UTimeRigPlayer::GetBeginTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.GetBeginTime"));
    struct Params_GetBeginTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetBeginTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UTimeRigPlayer::EventOccursNow(FName EventName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.EventOccursNow"));
    struct Params_EventOccursNow {
        FName EventName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_EventOccursNow params{};
    params.EventName = (FName)EventName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UTimeRigPlayer::FastForwardToNextEndOf(UClass* ActionType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.FastForwardToNextEndOf"));
    struct Params_FastForwardToNextEndOf {
        UClass* ActionType; // 0x0
    }; // Size: 0x8
    Params_FastForwardToNextEndOf params{};
    params.ActionType = (UClass*)ActionType;
    ProcessEvent(func, &params);
}
void UTimeRigPlayer::FastForwardToCurrentEndOf(UClass* ActionType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.FastForwardToCurrentEndOf"));
    struct Params_FastForwardToCurrentEndOf {
        UClass* ActionType; // 0x0
    }; // Size: 0x8
    Params_FastForwardToCurrentEndOf params{};
    params.ActionType = (UClass*)ActionType;
    ProcessEvent(func, &params);
}
void UTimeRigPlayer::AddEventHandler(FName EventName) {}
bool UTimeRigPlayer::EventOccursAt(FName EventName, float SecondsFromNow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TimeRig.TimeRigPlayer.EventOccursAt"));
    struct Params_EventOccursAt {
        FName EventName; // 0x0
        float SecondsFromNow; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_EventOccursAt params{};
    params.EventName = (FName)EventName;
    params.SecondsFromNow = (float)SecondsFromNow;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UTimeRigPlayer::AddCriticalEventHandler(FName EventName) {}

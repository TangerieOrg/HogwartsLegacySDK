#include "EMovieScenePlayerStatus\Type.hpp"
#include "EUpdatePositionMethod.hpp"
#include "FFrameNumber.hpp"
#include "FFrameRate.hpp"
#include "FFrameTime.hpp"
#include "FMovieSceneObjectBindingID.hpp"
#include "FMovieSceneRootEvaluationTemplateInstance.hpp"
#include "FMovieSceneSequencePlaybackParams.hpp"
#include "FMovieSceneSequencePlaybackSettings.hpp"
#include "FMovieSceneSequenceReplProperties.hpp"
#include "FQualifiedFrameTime.hpp"
#include "UFunction.hpp"
#include "UMovieSceneSequence.hpp"
#include "UMovieSceneSequencePlayer.hpp"
#include "UMovieSceneSequenceTickManager.hpp"
#include "UObject.hpp"
void UMovieSceneSequencePlayer::StopAtCurrentTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime"));
    struct Params_StopAtCurrentTime {
    }; // Size: 0x0
    Params_StopAtCurrentTime params{};
    ProcessEvent(func, &params);
}
UMovieSceneSequencePlayer* UMovieSceneSequencePlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneSequencePlayer");
    return (UMovieSceneSequencePlayer*)res;
}
void UMovieSceneSequencePlayer::SetPlaybackPosition(FMovieSceneSequencePlaybackParams PlaybackParams) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition"));
    struct Params_SetPlaybackPosition {
        FMovieSceneSequencePlaybackParams PlaybackParams; // 0x0
    }; // Size: 0x28
    Params_SetPlaybackPosition params{};
    params.PlaybackParams = (FMovieSceneSequencePlaybackParams)PlaybackParams;
    ProcessEvent(func, &params);
}
void UMovieSceneSequencePlayer::PlayReverse() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.PlayReverse"));
    struct Params_PlayReverse {
    }; // Size: 0x0
    Params_PlayReverse params{};
    ProcessEvent(func, &params);
}
void UMovieSceneSequencePlayer::Stop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.Stop"));
    struct Params_Stop {
    }; // Size: 0x0
    Params_Stop params{};
    ProcessEvent(func, &params);
}
void UMovieSceneSequencePlayer::SetTimeRange(float StartTime, float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.SetTimeRange"));
    struct Params_SetTimeRange {
        float StartTime; // 0x0
        float Duration; // 0x4
    }; // Size: 0x8
    Params_SetTimeRange params{};
    params.StartTime = (float)StartTime;
    params.Duration = (float)Duration;
    ProcessEvent(func, &params);
}
void UMovieSceneSequencePlayer::Scrub() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.Scrub"));
    struct Params_Scrub {
    }; // Size: 0x0
    Params_Scrub params{};
    ProcessEvent(func, &params);
}
void UMovieSceneSequencePlayer::SetFrameRate(FFrameRate FrameRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.SetFrameRate"));
    struct Params_SetFrameRate {
        FFrameRate FrameRate; // 0x0
    }; // Size: 0x8
    Params_SetFrameRate params{};
    params.FrameRate = (FFrameRate)FrameRate;
    ProcessEvent(func, &params);
}
FQualifiedFrameTime UMovieSceneSequencePlayer::GetDuration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.GetDuration"));
    struct Params_GetDuration {
        FQualifiedFrameTime ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetDuration params{};
    ProcessEvent(func, &params);
    return (FQualifiedFrameTime)params.ReturnValue;
}
void UMovieSceneSequencePlayer::SetPlayRate(float PlayRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.SetPlayRate"));
    struct Params_SetPlayRate {
        float PlayRate; // 0x0
    }; // Size: 0x4
    Params_SetPlayRate params{};
    params.PlayRate = (float)PlayRate;
    ProcessEvent(func, &params);
}
void UMovieSceneSequencePlayer::SetFrameRange(int32_t StartFrame, int32_t Duration, float SubFrames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.SetFrameRange"));
    struct Params_SetFrameRange {
        int32_t StartFrame; // 0x0
        int32_t Duration; // 0x4
        float SubFrames; // 0x8
    }; // Size: 0xc
    Params_SetFrameRange params{};
    params.StartFrame = (int32_t)StartFrame;
    params.Duration = (int32_t)Duration;
    params.SubFrames = (float)SubFrames;
    ProcessEvent(func, &params);
}
float UMovieSceneSequencePlayer::GetPlayRate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.GetPlayRate"));
    struct Params_GetPlayRate {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPlayRate params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UMovieSceneSequencePlayer::RPC_OnStopEvent(FFrameTime StoppedTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent"));
    struct Params_RPC_OnStopEvent {
        FFrameTime StoppedTime; // 0x0
    }; // Size: 0x8
    Params_RPC_OnStopEvent params{};
    params.StoppedTime = (FFrameTime)StoppedTime;
    ProcessEvent(func, &params);
}
void UMovieSceneSequencePlayer::SetDisableCameraCuts(bool bInDisableCameraCuts) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts"));
    struct Params_SetDisableCameraCuts {
        bool bInDisableCameraCuts; // 0x0
    }; // Size: 0x1
    Params_SetDisableCameraCuts params{};
    params.bInDisableCameraCuts = (bool)bInDisableCameraCuts;
    ProcessEvent(func, &params);
}
void UMovieSceneSequencePlayer::GoToEndAndStop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.GoToEndAndStop"));
    struct Params_GoToEndAndStop {
    }; // Size: 0x0
    Params_GoToEndAndStop params{};
    ProcessEvent(func, &params);
}
void UMovieSceneSequencePlayer::ScrubToSeconds(float TimeInSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.ScrubToSeconds"));
    struct Params_ScrubToSeconds {
        float TimeInSeconds; // 0x0
    }; // Size: 0x4
    Params_ScrubToSeconds params{};
    params.TimeInSeconds = (float)TimeInSeconds;
    ProcessEvent(func, &params);
}
FQualifiedFrameTime UMovieSceneSequencePlayer::GetEndTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.GetEndTime"));
    struct Params_GetEndTime {
        FQualifiedFrameTime ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetEndTime params{};
    ProcessEvent(func, &params);
    return (FQualifiedFrameTime)params.ReturnValue;
}
bool UMovieSceneSequencePlayer::ScrubToMarkedFrame(FString InLabel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame"));
    struct Params_ScrubToMarkedFrame {
        FString InLabel; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_ScrubToMarkedFrame params{};
    params.InLabel = (FString)InLabel;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMovieSceneSequencePlayer::ScrubToFrame(FFrameTime NewPosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.ScrubToFrame"));
    struct Params_ScrubToFrame {
        FFrameTime NewPosition; // 0x0
    }; // Size: 0x8
    Params_ScrubToFrame params{};
    params.NewPosition = (FFrameTime)NewPosition;
    ProcessEvent(func, &params);
}
void UMovieSceneSequencePlayer::RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, FFrameTime RelevantTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent"));
    struct Params_RPC_ExplicitServerUpdateEvent {
        EUpdatePositionMethod Method; // 0x0
        char pad_1[0x3];
        FFrameTime RelevantTime; // 0x4
    }; // Size: 0xc
    Params_RPC_ExplicitServerUpdateEvent params{};
    params.Method = (EUpdatePositionMethod)Method;
    params.RelevantTime = (FFrameTime)RelevantTime;
    ProcessEvent(func, &params);
}
void UMovieSceneSequencePlayer::PlayToSeconds(float TimeInSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.PlayToSeconds"));
    struct Params_PlayToSeconds {
        float TimeInSeconds; // 0x0
    }; // Size: 0x4
    Params_PlayToSeconds params{};
    params.TimeInSeconds = (float)TimeInSeconds;
    ProcessEvent(func, &params);
}
void UMovieSceneSequencePlayer::RestoreState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.RestoreState"));
    struct Params_RestoreState {
    }; // Size: 0x0
    Params_RestoreState params{};
    ProcessEvent(func, &params);
}
bool UMovieSceneSequencePlayer::PlayToMarkedFrame(FString InLabel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame"));
    struct Params_PlayToMarkedFrame {
        FString InLabel; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_PlayToMarkedFrame params{};
    params.InLabel = (FString)InLabel;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMovieSceneSequencePlayer::PlayToFrame(FFrameTime NewPosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.PlayToFrame"));
    struct Params_PlayToFrame {
        FFrameTime NewPosition; // 0x0
    }; // Size: 0x8
    Params_PlayToFrame params{};
    params.NewPosition = (FFrameTime)NewPosition;
    ProcessEvent(func, &params);
}
TArray<UObject*> UMovieSceneSequencePlayer::GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.GetBoundObjects"));
    struct Params_GetBoundObjects {
        FMovieSceneObjectBindingID ObjectBinding; // 0x0
        TArray<UObject*> ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetBoundObjects params{};
    params.ObjectBinding = (FMovieSceneObjectBindingID)ObjectBinding;
    ProcessEvent(func, &params);
    return (TArray<UObject*>)params.ReturnValue;
}
void UMovieSceneSequencePlayer::PlayTo(FMovieSceneSequencePlaybackParams PlaybackParams) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.PlayTo"));
    struct Params_PlayTo {
        FMovieSceneSequencePlaybackParams PlaybackParams; // 0x0
    }; // Size: 0x28
    Params_PlayTo params{};
    params.PlaybackParams = (FMovieSceneSequencePlaybackParams)PlaybackParams;
    ProcessEvent(func, &params);
}
void UMovieSceneSequencePlayer::ChangePlaybackDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection"));
    struct Params_ChangePlaybackDirection {
    }; // Size: 0x0
    Params_ChangePlaybackDirection params{};
    ProcessEvent(func, &params);
}
void UMovieSceneSequencePlayer::PlayLooping(int32_t NumLoops) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.PlayLooping"));
    struct Params_PlayLooping {
        int32_t NumLoops; // 0x0
    }; // Size: 0x4
    Params_PlayLooping params{};
    params.NumLoops = (int32_t)NumLoops;
    ProcessEvent(func, &params);
}
void UMovieSceneSequencePlayer::Play() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.Play"));
    struct Params_Play {
    }; // Size: 0x0
    Params_Play params{};
    ProcessEvent(func, &params);
}
bool UMovieSceneSequencePlayer::JumpToMarkedFrame(FString InLabel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame"));
    struct Params_JumpToMarkedFrame {
        FString InLabel; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_JumpToMarkedFrame params{};
    params.InLabel = (FString)InLabel;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMovieSceneSequencePlayer::Pause() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.Pause"));
    struct Params_Pause {
    }; // Size: 0x0
    Params_Pause params{};
    ProcessEvent(func, &params);
}
void UMovieSceneSequencePlayer::JumpToSeconds(float TimeInSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.JumpToSeconds"));
    struct Params_JumpToSeconds {
        float TimeInSeconds; // 0x0
    }; // Size: 0x4
    Params_JumpToSeconds params{};
    params.TimeInSeconds = (float)TimeInSeconds;
    ProcessEvent(func, &params);
}
void UMovieSceneSequencePlayer::JumpToFrame(FFrameTime NewPosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.JumpToFrame"));
    struct Params_JumpToFrame {
        FFrameTime NewPosition; // 0x0
    }; // Size: 0x8
    Params_JumpToFrame params{};
    params.NewPosition = (FFrameTime)NewPosition;
    ProcessEvent(func, &params);
}
bool UMovieSceneSequencePlayer::IsReversed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.IsReversed"));
    struct Params_IsReversed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsReversed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FQualifiedFrameTime UMovieSceneSequencePlayer::GetStartTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.GetStartTime"));
    struct Params_GetStartTime {
        FQualifiedFrameTime ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetStartTime params{};
    ProcessEvent(func, &params);
    return (FQualifiedFrameTime)params.ReturnValue;
}
bool UMovieSceneSequencePlayer::IsPlaying() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.IsPlaying"));
    struct Params_IsPlaying {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlaying params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMovieSceneSequencePlayer::IsPaused() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.IsPaused"));
    struct Params_IsPaused {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPaused params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FQualifiedFrameTime UMovieSceneSequencePlayer::GetCurrentTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.GetCurrentTime"));
    struct Params_GetCurrentTime {
        FQualifiedFrameTime ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetCurrentTime params{};
    ProcessEvent(func, &params);
    return (FQualifiedFrameTime)params.ReturnValue;
}
UMovieSceneSequence* UMovieSceneSequencePlayer::GetSequence() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.GetSequence"));
    struct Params_GetSequence {
        UMovieSceneSequence* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSequence params{};
    ProcessEvent(func, &params);
    return (UMovieSceneSequence*)params.ReturnValue;
}
int32_t UMovieSceneSequencePlayer::GetFrameDuration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.GetFrameDuration"));
    struct Params_GetFrameDuration {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetFrameDuration params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
TArray<FMovieSceneObjectBindingID> UMovieSceneSequencePlayer::GetObjectBindings(UObject* InObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.GetObjectBindings"));
    struct Params_GetObjectBindings {
        UObject* InObject; // 0x0
        TArray<FMovieSceneObjectBindingID> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetObjectBindings params{};
    params.InObject = (UObject*)InObject;
    ProcessEvent(func, &params);
    return (TArray<FMovieSceneObjectBindingID>)params.ReturnValue;
}
FFrameRate UMovieSceneSequencePlayer::GetFrameRate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.GetFrameRate"));
    struct Params_GetFrameRate {
        FFrameRate ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetFrameRate params{};
    ProcessEvent(func, &params);
    return (FFrameRate)params.ReturnValue;
}
bool UMovieSceneSequencePlayer::GetDisableCameraCuts() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts"));
    struct Params_GetDisableCameraCuts {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDisableCameraCuts params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}

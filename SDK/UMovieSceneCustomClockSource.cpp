#include "FFrameTime.hpp"
#include "FQualifiedFrameTime.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UMovieSceneCustomClockSource.hpp"
UMovieSceneCustomClockSource* UMovieSceneCustomClockSource::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneCustomClockSource");
    return (UMovieSceneCustomClockSource*)res;
}
void UMovieSceneCustomClockSource::OnTick(float DeltaSeconds, float InPlayRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneCustomClockSource.OnTick"));
    struct Params_OnTick {
        float DeltaSeconds; // 0x0
        float InPlayRate; // 0x4
    }; // Size: 0x8
    Params_OnTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    params.InPlayRate = (float)InPlayRate;
    ProcessEvent(func, &params);
}
void UMovieSceneCustomClockSource::OnStopPlaying(FQualifiedFrameTime& InStopTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneCustomClockSource.OnStopPlaying"));
    struct Params_OnStopPlaying {
        FQualifiedFrameTime InStopTime; // 0x0
    }; // Size: 0x10
    Params_OnStopPlaying params{};
    params.InStopTime = (FQualifiedFrameTime)InStopTime;
    ProcessEvent(func, &params);
    InStopTime = params.InStopTime;
}
void UMovieSceneCustomClockSource::OnStartPlaying(FQualifiedFrameTime& InStartTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneCustomClockSource.OnStartPlaying"));
    struct Params_OnStartPlaying {
        FQualifiedFrameTime InStartTime; // 0x0
    }; // Size: 0x10
    Params_OnStartPlaying params{};
    params.InStartTime = (FQualifiedFrameTime)InStartTime;
    ProcessEvent(func, &params);
    InStartTime = params.InStartTime;
}
FFrameTime UMovieSceneCustomClockSource::OnRequestCurrentTime(FQualifiedFrameTime& InCurrentTime, float InPlayRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime"));
    struct Params_OnRequestCurrentTime {
        FQualifiedFrameTime InCurrentTime; // 0x0
        float InPlayRate; // 0x10
        FFrameTime ReturnValue; // 0x14
    }; // Size: 0x1c
    Params_OnRequestCurrentTime params{};
    params.InCurrentTime = (FQualifiedFrameTime)InCurrentTime;
    params.InPlayRate = (float)InPlayRate;
    ProcessEvent(func, &params);
    InCurrentTime = params.InCurrentTime;
    return (FFrameTime)params.ReturnValue;
}

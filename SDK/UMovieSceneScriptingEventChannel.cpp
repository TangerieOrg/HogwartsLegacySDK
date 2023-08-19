#include "ESequenceTimeUnit.hpp"
#include "FFrameNumber.hpp"
#include "FMovieSceneEvent.hpp"
#include "UFunction.hpp"
#include "UMovieSceneScriptingChannel.hpp"
#include "UMovieSceneScriptingEventChannel.hpp"
#include "UMovieSceneScriptingEventKey.hpp"
#include "UMovieSceneScriptingKey.hpp"
UMovieSceneScriptingEventChannel* UMovieSceneScriptingEventChannel::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.MovieSceneScriptingEventChannel");
    return (UMovieSceneScriptingEventChannel*)res;
}
void UMovieSceneScriptingEventChannel::RemoveKey(UMovieSceneScriptingKey* Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingEventChannel.RemoveKey"));
    struct Params_RemoveKey {
        UMovieSceneScriptingKey* Key; // 0x0
    }; // Size: 0x8
    Params_RemoveKey params{};
    params.Key = (UMovieSceneScriptingKey*)Key;
    ProcessEvent(func, &params);
}
TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingEventChannel::GetKeys() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingEventChannel.GetKeys"));
    struct Params_GetKeys {
        TArray<UMovieSceneScriptingKey*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetKeys params{};
    ProcessEvent(func, &params);
    return (TArray<UMovieSceneScriptingKey*>)params.ReturnValue;
}
UMovieSceneScriptingEventKey* UMovieSceneScriptingEventChannel::AddKey(FFrameNumber& InTime, FMovieSceneEvent NewValue, float SubFrame, ESequenceTimeUnit TimeUnit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingEventChannel.AddKey"));
    struct Params_AddKey {
        FFrameNumber InTime; // 0x0
        char pad_4[0x4];
        FMovieSceneEvent NewValue; // 0x8
        float SubFrame; // 0x30
        ESequenceTimeUnit TimeUnit; // 0x34
        char pad_35[0x3];
        UMovieSceneScriptingEventKey* ReturnValue; // 0x38
    }; // Size: 0x40
    Params_AddKey params{};
    params.InTime = (FFrameNumber)InTime;
    params.NewValue = (FMovieSceneEvent)NewValue;
    params.SubFrame = (float)SubFrame;
    params.TimeUnit = (ESequenceTimeUnit)TimeUnit;
    ProcessEvent(func, &params);
    InTime = params.InTime;
    return (UMovieSceneScriptingEventKey*)params.ReturnValue;
}

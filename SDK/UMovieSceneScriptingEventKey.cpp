#include "ESequenceTimeUnit.hpp"
#include "FFrameNumber.hpp"
#include "FFrameTime.hpp"
#include "FMovieSceneEvent.hpp"
#include "UFunction.hpp"
#include "UMovieSceneScriptingEventKey.hpp"
#include "UMovieSceneScriptingKey.hpp"
UMovieSceneScriptingEventKey* UMovieSceneScriptingEventKey::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.MovieSceneScriptingEventKey");
    return (UMovieSceneScriptingEventKey*)res;
}
void UMovieSceneScriptingEventKey::SetValue(FMovieSceneEvent& InNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingEventKey.SetValue"));
    struct Params_SetValue {
        FMovieSceneEvent InNewValue; // 0x0
    }; // Size: 0x28
    Params_SetValue params{};
    params.InNewValue = (FMovieSceneEvent)InNewValue;
    ProcessEvent(func, &params);
    InNewValue = params.InNewValue;
}
void UMovieSceneScriptingEventKey::SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingEventKey.SetTime"));
    struct Params_SetTime {
        FFrameNumber NewFrameNumber; // 0x0
        float SubFrame; // 0x4
        ESequenceTimeUnit TimeUnit; // 0x8
    }; // Size: 0x9
    Params_SetTime params{};
    params.NewFrameNumber = (FFrameNumber)NewFrameNumber;
    params.SubFrame = (float)SubFrame;
    params.TimeUnit = (ESequenceTimeUnit)TimeUnit;
    ProcessEvent(func, &params);
    NewFrameNumber = params.NewFrameNumber;
}
FMovieSceneEvent UMovieSceneScriptingEventKey::GetValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingEventKey.GetValue"));
    struct Params_GetValue {
        FMovieSceneEvent ReturnValue; // 0x0
    }; // Size: 0x28
    Params_GetValue params{};
    ProcessEvent(func, &params);
    return (FMovieSceneEvent)params.ReturnValue;
}
FFrameTime UMovieSceneScriptingEventKey::GetTime(ESequenceTimeUnit TimeUnit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingEventKey.GetTime"));
    struct Params_GetTime {
        ESequenceTimeUnit TimeUnit; // 0x0
        char pad_1[0x3];
        FFrameTime ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetTime params{};
    params.TimeUnit = (ESequenceTimeUnit)TimeUnit;
    ProcessEvent(func, &params);
    return (FFrameTime)params.ReturnValue;
}

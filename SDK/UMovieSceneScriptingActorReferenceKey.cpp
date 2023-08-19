#include "ESequenceTimeUnit.hpp"
#include "FFrameNumber.hpp"
#include "FFrameTime.hpp"
#include "FMovieSceneObjectBindingID.hpp"
#include "UFunction.hpp"
#include "UMovieSceneScriptingActorReferenceKey.hpp"
#include "UMovieSceneScriptingKey.hpp"
FFrameTime UMovieSceneScriptingActorReferenceKey::GetTime(ESequenceTimeUnit TimeUnit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.GetTime"));
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
UMovieSceneScriptingActorReferenceKey* UMovieSceneScriptingActorReferenceKey::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey");
    return (UMovieSceneScriptingActorReferenceKey*)res;
}
void UMovieSceneScriptingActorReferenceKey::SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.SetTime"));
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
void UMovieSceneScriptingActorReferenceKey::SetValue(FMovieSceneObjectBindingID& InNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.SetValue"));
    struct Params_SetValue {
        FMovieSceneObjectBindingID InNewValue; // 0x0
    }; // Size: 0x18
    Params_SetValue params{};
    params.InNewValue = (FMovieSceneObjectBindingID)InNewValue;
    ProcessEvent(func, &params);
    InNewValue = params.InNewValue;
}
FMovieSceneObjectBindingID UMovieSceneScriptingActorReferenceKey::GetValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue"));
    struct Params_GetValue {
        FMovieSceneObjectBindingID ReturnValue; // 0x0
    }; // Size: 0x18
    Params_GetValue params{};
    ProcessEvent(func, &params);
    return (FMovieSceneObjectBindingID)params.ReturnValue;
}

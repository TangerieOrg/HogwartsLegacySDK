#include "ESequenceTimeUnit.hpp"
#include "FFrameNumber.hpp"
#include "FFrameTime.hpp"
#include "UFunction.hpp"
#include "UMovieSceneScriptingKey.hpp"
#include "UMovieSceneScriptingStringKey.hpp"
FFrameTime UMovieSceneScriptingStringKey::GetTime(ESequenceTimeUnit TimeUnit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingStringKey.GetTime"));
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
UMovieSceneScriptingStringKey* UMovieSceneScriptingStringKey::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.MovieSceneScriptingStringKey");
    return (UMovieSceneScriptingStringKey*)res;
}
void UMovieSceneScriptingStringKey::SetValue(FString InNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingStringKey.SetValue"));
    struct Params_SetValue {
        FString InNewValue; // 0x0
    }; // Size: 0x10
    Params_SetValue params{};
    params.InNewValue = (FString)InNewValue;
    ProcessEvent(func, &params);
}
void UMovieSceneScriptingStringKey::SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingStringKey.SetTime"));
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
FString UMovieSceneScriptingStringKey::GetValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingStringKey.GetValue"));
    struct Params_GetValue {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetValue params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}

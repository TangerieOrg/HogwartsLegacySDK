#include "ESequenceTimeUnit.hpp"
#include "FFrameNumber.hpp"
#include "FFrameTime.hpp"
#include "UFunction.hpp"
#include "UMovieSceneScriptingBoolKey.hpp"
#include "UMovieSceneScriptingKey.hpp"
FFrameTime UMovieSceneScriptingBoolKey::GetTime(ESequenceTimeUnit TimeUnit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.GetTime"));
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
void UMovieSceneScriptingBoolKey::SetValue(bool InNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.SetValue"));
    struct Params_SetValue {
        bool InNewValue; // 0x0
    }; // Size: 0x1
    Params_SetValue params{};
    params.InNewValue = (bool)InNewValue;
    ProcessEvent(func, &params);
}
UMovieSceneScriptingBoolKey* UMovieSceneScriptingBoolKey::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.MovieSceneScriptingBoolKey");
    return (UMovieSceneScriptingBoolKey*)res;
}
void UMovieSceneScriptingBoolKey::SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.SetTime"));
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
bool UMovieSceneScriptingBoolKey::GetValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingBoolKey.GetValue"));
    struct Params_GetValue {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetValue params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}

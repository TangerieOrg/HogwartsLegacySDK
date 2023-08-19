#include "ESequenceTimeUnit.hpp"
#include "FFrameNumber.hpp"
#include "FFrameTime.hpp"
#include "UFunction.hpp"
#include "UMovieSceneScriptingKey.hpp"
#include "UMovieSceneScriptingObjectPathKey.hpp"
#include "UObject.hpp"
UObject* UMovieSceneScriptingObjectPathKey::GetValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue"));
    struct Params_GetValue {
        UObject* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetValue params{};
    ProcessEvent(func, &params);
    return (UObject*)params.ReturnValue;
}
UMovieSceneScriptingObjectPathKey* UMovieSceneScriptingObjectPathKey::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.MovieSceneScriptingObjectPathKey");
    return (UMovieSceneScriptingObjectPathKey*)res;
}
void UMovieSceneScriptingObjectPathKey::SetValue(UObject* InNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.SetValue"));
    struct Params_SetValue {
        UObject* InNewValue; // 0x0
    }; // Size: 0x8
    Params_SetValue params{};
    params.InNewValue = (UObject*)InNewValue;
    ProcessEvent(func, &params);
}
FFrameTime UMovieSceneScriptingObjectPathKey::GetTime(ESequenceTimeUnit TimeUnit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.GetTime"));
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
void UMovieSceneScriptingObjectPathKey::SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingObjectPathKey.SetTime"));
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

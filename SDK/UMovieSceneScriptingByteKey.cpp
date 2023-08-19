#include "ESequenceTimeUnit.hpp"
#include "FFrameNumber.hpp"
#include "FFrameTime.hpp"
#include "UFunction.hpp"
#include "UMovieSceneScriptingByteKey.hpp"
#include "UMovieSceneScriptingKey.hpp"
UMovieSceneScriptingByteKey* UMovieSceneScriptingByteKey::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.MovieSceneScriptingByteKey");
    return (UMovieSceneScriptingByteKey*)res;
}
void UMovieSceneScriptingByteKey::SetValue(uint8_t InNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingByteKey.SetValue"));
    struct Params_SetValue {
        uint8_t InNewValue; // 0x0
    }; // Size: 0x1
    Params_SetValue params{};
    params.InNewValue = (uint8_t)InNewValue;
    ProcessEvent(func, &params);
}
uint8_t UMovieSceneScriptingByteKey::GetValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingByteKey.GetValue"));
    struct Params_GetValue {
        uint8_t ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetValue params{};
    ProcessEvent(func, &params);
    return (uint8_t)params.ReturnValue;
}
void UMovieSceneScriptingByteKey::SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingByteKey.SetTime"));
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
FFrameTime UMovieSceneScriptingByteKey::GetTime(ESequenceTimeUnit TimeUnit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingByteKey.GetTime"));
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

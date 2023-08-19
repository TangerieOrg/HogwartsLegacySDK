#include "EMovieSceneKeyInterpolation.hpp"
#include "ESequenceTimeUnit.hpp"
#include "FFrameNumber.hpp"
#include "UFunction.hpp"
#include "UMovieSceneScriptingByteChannel.hpp"
#include "UMovieSceneScriptingByteKey.hpp"
#include "UMovieSceneScriptingChannel.hpp"
#include "UMovieSceneScriptingKey.hpp"
void UMovieSceneScriptingByteChannel::RemoveKey(UMovieSceneScriptingKey* Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.RemoveKey"));
    struct Params_RemoveKey {
        UMovieSceneScriptingKey* Key; // 0x0
    }; // Size: 0x8
    Params_RemoveKey params{};
    params.Key = (UMovieSceneScriptingKey*)Key;
    ProcessEvent(func, &params);
}
UMovieSceneScriptingByteChannel* UMovieSceneScriptingByteChannel::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.MovieSceneScriptingByteChannel");
    return (UMovieSceneScriptingByteChannel*)res;
}
uint8_t UMovieSceneScriptingByteChannel::GetDefault() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.GetDefault"));
    struct Params_GetDefault {
        uint8_t ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDefault params{};
    ProcessEvent(func, &params);
    return (uint8_t)params.ReturnValue;
}
void UMovieSceneScriptingByteChannel::SetDefault(uint8_t InDefaultValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.SetDefault"));
    struct Params_SetDefault {
        uint8_t InDefaultValue; // 0x0
    }; // Size: 0x1
    Params_SetDefault params{};
    params.InDefaultValue = (uint8_t)InDefaultValue;
    ProcessEvent(func, &params);
}
void UMovieSceneScriptingByteChannel::RemoveDefault() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.RemoveDefault"));
    struct Params_RemoveDefault {
    }; // Size: 0x0
    Params_RemoveDefault params{};
    ProcessEvent(func, &params);
}
bool UMovieSceneScriptingByteChannel::HasDefault() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.HasDefault"));
    struct Params_HasDefault {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasDefault params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UMovieSceneScriptingByteKey* UMovieSceneScriptingByteChannel::AddKey(FFrameNumber& InTime, uint8_t NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.AddKey"));
    struct Params_AddKey {
        FFrameNumber InTime; // 0x0
        uint8_t NewValue; // 0x4
        char pad_5[0x3];
        float SubFrame; // 0x8
        ESequenceTimeUnit TimeUnit; // 0xc
        EMovieSceneKeyInterpolation InInterpolation; // 0xd
        char pad_e[0x2];
        UMovieSceneScriptingByteKey* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_AddKey params{};
    params.InTime = (FFrameNumber)InTime;
    params.NewValue = (uint8_t)NewValue;
    params.SubFrame = (float)SubFrame;
    params.TimeUnit = (ESequenceTimeUnit)TimeUnit;
    params.InInterpolation = (EMovieSceneKeyInterpolation)InInterpolation;
    ProcessEvent(func, &params);
    InTime = params.InTime;
    return (UMovieSceneScriptingByteKey*)params.ReturnValue;
}
TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingByteChannel::GetKeys() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingByteChannel.GetKeys"));
    struct Params_GetKeys {
        TArray<UMovieSceneScriptingKey*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetKeys params{};
    ProcessEvent(func, &params);
    return (TArray<UMovieSceneScriptingKey*>)params.ReturnValue;
}

#include "ESequenceTimeUnit.hpp"
#include "FFrameNumber.hpp"
#include "FFrameRate.hpp"
#include "FSequencerScriptingRange.hpp"
#include "UFunction.hpp"
#include "UMovieSceneScriptingBoolChannel.hpp"
#include "UMovieSceneScriptingBoolKey.hpp"
#include "UMovieSceneScriptingChannel.hpp"
#include "UMovieSceneScriptingKey.hpp"
bool UMovieSceneScriptingBoolChannel::HasDefault() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault"));
    struct Params_HasDefault {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasDefault params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UMovieSceneScriptingBoolChannel* UMovieSceneScriptingBoolChannel::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.MovieSceneScriptingBoolChannel");
    return (UMovieSceneScriptingBoolChannel*)res;
}
void UMovieSceneScriptingBoolChannel::RemoveKey(UMovieSceneScriptingKey* Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.RemoveKey"));
    struct Params_RemoveKey {
        UMovieSceneScriptingKey* Key; // 0x0
    }; // Size: 0x8
    Params_RemoveKey params{};
    params.Key = (UMovieSceneScriptingKey*)Key;
    ProcessEvent(func, &params);
}
void UMovieSceneScriptingBoolChannel::SetDefault(bool InDefaultValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.SetDefault"));
    struct Params_SetDefault {
        bool InDefaultValue; // 0x0
    }; // Size: 0x1
    Params_SetDefault params{};
    params.InDefaultValue = (bool)InDefaultValue;
    ProcessEvent(func, &params);
}
void UMovieSceneScriptingBoolChannel::RemoveDefault() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.RemoveDefault"));
    struct Params_RemoveDefault {
    }; // Size: 0x0
    Params_RemoveDefault params{};
    ProcessEvent(func, &params);
}
bool UMovieSceneScriptingBoolChannel::GetDefault() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault"));
    struct Params_GetDefault {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetDefault params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UMovieSceneScriptingBoolChannel::GetNumKeys() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys"));
    struct Params_GetNumKeys {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumKeys params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingBoolChannel::GetKeys() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys"));
    struct Params_GetKeys {
        TArray<UMovieSceneScriptingKey*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetKeys params{};
    ProcessEvent(func, &params);
    return (TArray<UMovieSceneScriptingKey*>)params.ReturnValue;
}
TArray<bool> UMovieSceneScriptingBoolChannel::EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.EvaluateKeys"));
    struct Params_EvaluateKeys {
        FSequencerScriptingRange Range; // 0x0
        FFrameRate FrameRate; // 0x14
        char pad_1c[0x4];
        TArray<bool> ReturnValue; // 0x20
    }; // Size: 0x30
    Params_EvaluateKeys params{};
    params.Range = (FSequencerScriptingRange)Range;
    params.FrameRate = (FFrameRate)FrameRate;
    ProcessEvent(func, &params);
    return (TArray<bool>)params.ReturnValue;
}
FSequencerScriptingRange UMovieSceneScriptingBoolChannel::ComputeEffectiveRange() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange"));
    struct Params_ComputeEffectiveRange {
        FSequencerScriptingRange ReturnValue; // 0x0
    }; // Size: 0x14
    Params_ComputeEffectiveRange params{};
    ProcessEvent(func, &params);
    return (FSequencerScriptingRange)params.ReturnValue;
}
UMovieSceneScriptingBoolKey* UMovieSceneScriptingBoolChannel::AddKey(FFrameNumber& InTime, bool NewValue, float SubFrame, ESequenceTimeUnit TimeUnit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingBoolChannel.AddKey"));
    struct Params_AddKey {
        FFrameNumber InTime; // 0x0
        bool NewValue; // 0x4
        char pad_5[0x3];
        float SubFrame; // 0x8
        ESequenceTimeUnit TimeUnit; // 0xc
        char pad_d[0x3];
        UMovieSceneScriptingBoolKey* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_AddKey params{};
    params.InTime = (FFrameNumber)InTime;
    params.NewValue = (bool)NewValue;
    params.SubFrame = (float)SubFrame;
    params.TimeUnit = (ESequenceTimeUnit)TimeUnit;
    ProcessEvent(func, &params);
    InTime = params.InTime;
    return (UMovieSceneScriptingBoolKey*)params.ReturnValue;
}

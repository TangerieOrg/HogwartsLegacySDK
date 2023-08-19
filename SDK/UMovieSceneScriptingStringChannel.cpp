#include "ESequenceTimeUnit.hpp"
#include "FFrameNumber.hpp"
#include "UFunction.hpp"
#include "UMovieSceneScriptingChannel.hpp"
#include "UMovieSceneScriptingKey.hpp"
#include "UMovieSceneScriptingStringChannel.hpp"
#include "UMovieSceneScriptingStringKey.hpp"
UMovieSceneScriptingStringChannel* UMovieSceneScriptingStringChannel::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.MovieSceneScriptingStringChannel");
    return (UMovieSceneScriptingStringChannel*)res;
}
UMovieSceneScriptingStringKey* UMovieSceneScriptingStringChannel::AddKey(FFrameNumber& InTime, FString NewValue, float SubFrame, ESequenceTimeUnit TimeUnit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.AddKey"));
    struct Params_AddKey {
        FFrameNumber InTime; // 0x0
        char pad_4[0x4];
        FString NewValue; // 0x8
        float SubFrame; // 0x18
        ESequenceTimeUnit TimeUnit; // 0x1c
        char pad_1d[0x3];
        UMovieSceneScriptingStringKey* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_AddKey params{};
    params.InTime = (FFrameNumber)InTime;
    params.NewValue = (FString)NewValue;
    params.SubFrame = (float)SubFrame;
    params.TimeUnit = (ESequenceTimeUnit)TimeUnit;
    ProcessEvent(func, &params);
    InTime = params.InTime;
    return (UMovieSceneScriptingStringKey*)params.ReturnValue;
}
void UMovieSceneScriptingStringChannel::SetDefault(FString InDefaultValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.SetDefault"));
    struct Params_SetDefault {
        FString InDefaultValue; // 0x0
    }; // Size: 0x10
    Params_SetDefault params{};
    params.InDefaultValue = (FString)InDefaultValue;
    ProcessEvent(func, &params);
}
void UMovieSceneScriptingStringChannel::RemoveKey(UMovieSceneScriptingKey* Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey"));
    struct Params_RemoveKey {
        UMovieSceneScriptingKey* Key; // 0x0
    }; // Size: 0x8
    Params_RemoveKey params{};
    params.Key = (UMovieSceneScriptingKey*)Key;
    ProcessEvent(func, &params);
}
void UMovieSceneScriptingStringChannel::RemoveDefault() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.RemoveDefault"));
    struct Params_RemoveDefault {
    }; // Size: 0x0
    Params_RemoveDefault params{};
    ProcessEvent(func, &params);
}
TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingStringChannel::GetKeys() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.GetKeys"));
    struct Params_GetKeys {
        TArray<UMovieSceneScriptingKey*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetKeys params{};
    ProcessEvent(func, &params);
    return (TArray<UMovieSceneScriptingKey*>)params.ReturnValue;
}
bool UMovieSceneScriptingStringChannel::HasDefault() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.HasDefault"));
    struct Params_HasDefault {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasDefault params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UMovieSceneScriptingStringChannel::GetDefault() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingStringChannel.GetDefault"));
    struct Params_GetDefault {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetDefault params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}

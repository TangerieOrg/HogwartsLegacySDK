#include "ESequenceTimeUnit.hpp"
#include "FFrameNumber.hpp"
#include "UFunction.hpp"
#include "UMovieSceneScriptingChannel.hpp"
#include "UMovieSceneScriptingKey.hpp"
#include "UMovieSceneScriptingObjectPathChannel.hpp"
#include "UMovieSceneScriptingObjectPathKey.hpp"
#include "UObject.hpp"
UMovieSceneScriptingObjectPathKey* UMovieSceneScriptingObjectPathChannel::AddKey(FFrameNumber InTime, UObject* NewValue, float SubFrame, ESequenceTimeUnit TimeUnit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.AddKey"));
    struct Params_AddKey {
        FFrameNumber InTime; // 0x0
        char pad_4[0x4];
        UObject* NewValue; // 0x8
        float SubFrame; // 0x10
        ESequenceTimeUnit TimeUnit; // 0x14
        char pad_15[0x3];
        UMovieSceneScriptingObjectPathKey* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_AddKey params{};
    params.InTime = (FFrameNumber)InTime;
    params.NewValue = (UObject*)NewValue;
    params.SubFrame = (float)SubFrame;
    params.TimeUnit = (ESequenceTimeUnit)TimeUnit;
    ProcessEvent(func, &params);
    return (UMovieSceneScriptingObjectPathKey*)params.ReturnValue;
}
UMovieSceneScriptingObjectPathChannel* UMovieSceneScriptingObjectPathChannel::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel");
    return (UMovieSceneScriptingObjectPathChannel*)res;
}
void UMovieSceneScriptingObjectPathChannel::SetDefault(UObject* InDefaultValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.SetDefault"));
    struct Params_SetDefault {
        UObject* InDefaultValue; // 0x0
    }; // Size: 0x8
    Params_SetDefault params{};
    params.InDefaultValue = (UObject*)InDefaultValue;
    ProcessEvent(func, &params);
}
TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingObjectPathChannel::GetKeys() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys"));
    struct Params_GetKeys {
        TArray<UMovieSceneScriptingKey*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetKeys params{};
    ProcessEvent(func, &params);
    return (TArray<UMovieSceneScriptingKey*>)params.ReturnValue;
}
void UMovieSceneScriptingObjectPathChannel::RemoveKey(UMovieSceneScriptingKey* Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveKey"));
    struct Params_RemoveKey {
        UMovieSceneScriptingKey* Key; // 0x0
    }; // Size: 0x8
    Params_RemoveKey params{};
    params.Key = (UMovieSceneScriptingKey*)Key;
    ProcessEvent(func, &params);
}
void UMovieSceneScriptingObjectPathChannel::RemoveDefault() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveDefault"));
    struct Params_RemoveDefault {
    }; // Size: 0x0
    Params_RemoveDefault params{};
    ProcessEvent(func, &params);
}
bool UMovieSceneScriptingObjectPathChannel::HasDefault() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault"));
    struct Params_HasDefault {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasDefault params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UObject* UMovieSceneScriptingObjectPathChannel::GetDefault() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault"));
    struct Params_GetDefault {
        UObject* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDefault params{};
    ProcessEvent(func, &params);
    return (UObject*)params.ReturnValue;
}

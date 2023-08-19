#include "ESequenceTimeUnit.hpp"
#include "FFrameNumber.hpp"
#include "FMovieSceneObjectBindingID.hpp"
#include "UFunction.hpp"
#include "UMovieSceneScriptingActorReferenceChannel.hpp"
#include "UMovieSceneScriptingActorReferenceKey.hpp"
#include "UMovieSceneScriptingChannel.hpp"
#include "UMovieSceneScriptingKey.hpp"
TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingActorReferenceChannel::GetKeys() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys"));
    struct Params_GetKeys {
        TArray<UMovieSceneScriptingKey*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetKeys params{};
    ProcessEvent(func, &params);
    return (TArray<UMovieSceneScriptingKey*>)params.ReturnValue;
}
void UMovieSceneScriptingActorReferenceChannel::RemoveDefault() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveDefault"));
    struct Params_RemoveDefault {
    }; // Size: 0x0
    Params_RemoveDefault params{};
    ProcessEvent(func, &params);
}
UMovieSceneScriptingActorReferenceChannel* UMovieSceneScriptingActorReferenceChannel::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel");
    return (UMovieSceneScriptingActorReferenceChannel*)res;
}
void UMovieSceneScriptingActorReferenceChannel::SetDefault(FMovieSceneObjectBindingID InDefaultValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.SetDefault"));
    struct Params_SetDefault {
        FMovieSceneObjectBindingID InDefaultValue; // 0x0
    }; // Size: 0x18
    Params_SetDefault params{};
    params.InDefaultValue = (FMovieSceneObjectBindingID)InDefaultValue;
    ProcessEvent(func, &params);
}
UMovieSceneScriptingActorReferenceKey* UMovieSceneScriptingActorReferenceChannel::AddKey(FFrameNumber InTime, FMovieSceneObjectBindingID NewValue, float SubFrame, ESequenceTimeUnit TimeUnit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.AddKey"));
    struct Params_AddKey {
        FFrameNumber InTime; // 0x0
        FMovieSceneObjectBindingID NewValue; // 0x4
        float SubFrame; // 0x1c
        ESequenceTimeUnit TimeUnit; // 0x20
        char pad_21[0x7];
        UMovieSceneScriptingActorReferenceKey* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_AddKey params{};
    params.InTime = (FFrameNumber)InTime;
    params.NewValue = (FMovieSceneObjectBindingID)NewValue;
    params.SubFrame = (float)SubFrame;
    params.TimeUnit = (ESequenceTimeUnit)TimeUnit;
    ProcessEvent(func, &params);
    return (UMovieSceneScriptingActorReferenceKey*)params.ReturnValue;
}
void UMovieSceneScriptingActorReferenceChannel::RemoveKey(UMovieSceneScriptingKey* Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveKey"));
    struct Params_RemoveKey {
        UMovieSceneScriptingKey* Key; // 0x0
    }; // Size: 0x8
    Params_RemoveKey params{};
    params.Key = (UMovieSceneScriptingKey*)Key;
    ProcessEvent(func, &params);
}
bool UMovieSceneScriptingActorReferenceChannel::HasDefault() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault"));
    struct Params_HasDefault {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasDefault params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FMovieSceneObjectBindingID UMovieSceneScriptingActorReferenceChannel::GetDefault() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault"));
    struct Params_GetDefault {
        FMovieSceneObjectBindingID ReturnValue; // 0x0
    }; // Size: 0x18
    Params_GetDefault params{};
    ProcessEvent(func, &params);
    return (FMovieSceneObjectBindingID)params.ReturnValue;
}

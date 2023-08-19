#include "ESequenceTimeUnit.hpp"
#include "FFrameNumber.hpp"
#include "UFunction.hpp"
#include "UMovieSceneScriptingChannel.hpp"
#include "UMovieSceneScriptingIntegerChannel.hpp"
#include "UMovieSceneScriptingIntegerKey.hpp"
#include "UMovieSceneScriptingKey.hpp"
UMovieSceneScriptingIntegerChannel* UMovieSceneScriptingIntegerChannel::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.MovieSceneScriptingIntegerChannel");
    return (UMovieSceneScriptingIntegerChannel*)res;
}
TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingIntegerChannel::GetKeys() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys"));
    struct Params_GetKeys {
        TArray<UMovieSceneScriptingKey*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetKeys params{};
    ProcessEvent(func, &params);
    return (TArray<UMovieSceneScriptingKey*>)params.ReturnValue;
}
void UMovieSceneScriptingIntegerChannel::SetDefault(int32_t InDefaultValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.SetDefault"));
    struct Params_SetDefault {
        int32_t InDefaultValue; // 0x0
    }; // Size: 0x4
    Params_SetDefault params{};
    params.InDefaultValue = (int32_t)InDefaultValue;
    ProcessEvent(func, &params);
}
void UMovieSceneScriptingIntegerChannel::RemoveKey(UMovieSceneScriptingKey* Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveKey"));
    struct Params_RemoveKey {
        UMovieSceneScriptingKey* Key; // 0x0
    }; // Size: 0x8
    Params_RemoveKey params{};
    params.Key = (UMovieSceneScriptingKey*)Key;
    ProcessEvent(func, &params);
}
UMovieSceneScriptingIntegerKey* UMovieSceneScriptingIntegerChannel::AddKey(FFrameNumber& InTime, int32_t NewValue, float SubFrame, ESequenceTimeUnit TimeUnit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.AddKey"));
    struct Params_AddKey {
        FFrameNumber InTime; // 0x0
        int32_t NewValue; // 0x4
        float SubFrame; // 0x8
        ESequenceTimeUnit TimeUnit; // 0xc
        char pad_d[0x3];
        UMovieSceneScriptingIntegerKey* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_AddKey params{};
    params.InTime = (FFrameNumber)InTime;
    params.NewValue = (int32_t)NewValue;
    params.SubFrame = (float)SubFrame;
    params.TimeUnit = (ESequenceTimeUnit)TimeUnit;
    ProcessEvent(func, &params);
    InTime = params.InTime;
    return (UMovieSceneScriptingIntegerKey*)params.ReturnValue;
}
void UMovieSceneScriptingIntegerChannel::RemoveDefault() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveDefault"));
    struct Params_RemoveDefault {
    }; // Size: 0x0
    Params_RemoveDefault params{};
    ProcessEvent(func, &params);
}
bool UMovieSceneScriptingIntegerChannel::HasDefault() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault"));
    struct Params_HasDefault {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasDefault params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UMovieSceneScriptingIntegerChannel::GetDefault() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault"));
    struct Params_GetDefault {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDefault params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}

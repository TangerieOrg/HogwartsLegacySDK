#include "EMovieSceneKeyInterpolation.hpp"
#include "ERichCurveExtrapolation.hpp"
#include "ESequenceTimeUnit.hpp"
#include "FFrameNumber.hpp"
#include "FFrameRate.hpp"
#include "FSequencerScriptingRange.hpp"
#include "UFunction.hpp"
#include "UMovieSceneScriptingChannel.hpp"
#include "UMovieSceneScriptingFloatChannel.hpp"
#include "UMovieSceneScriptingFloatKey.hpp"
#include "UMovieSceneScriptingKey.hpp"
UMovieSceneScriptingFloatChannel* UMovieSceneScriptingFloatChannel::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.MovieSceneScriptingFloatChannel");
    return (UMovieSceneScriptingFloatChannel*)res;
}
void UMovieSceneScriptingFloatChannel::SetPreInfinityExtrapolation(ERichCurveExtrapolation InExtrapolation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation"));
    struct Params_SetPreInfinityExtrapolation {
        ERichCurveExtrapolation InExtrapolation; // 0x0
    }; // Size: 0x1
    Params_SetPreInfinityExtrapolation params{};
    params.InExtrapolation = (ERichCurveExtrapolation)InExtrapolation;
    ProcessEvent(func, &params);
}
ERichCurveExtrapolation UMovieSceneScriptingFloatChannel::GetPreInfinityExtrapolation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation"));
    struct Params_GetPreInfinityExtrapolation {
        ERichCurveExtrapolation ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPreInfinityExtrapolation params{};
    ProcessEvent(func, &params);
    return (ERichCurveExtrapolation)params.ReturnValue;
}
bool UMovieSceneScriptingFloatChannel::HasDefault() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault"));
    struct Params_HasDefault {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasDefault params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMovieSceneScriptingFloatChannel::SetPostInfinityExtrapolation(ERichCurveExtrapolation InExtrapolation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation"));
    struct Params_SetPostInfinityExtrapolation {
        ERichCurveExtrapolation InExtrapolation; // 0x0
    }; // Size: 0x1
    Params_SetPostInfinityExtrapolation params{};
    params.InExtrapolation = (ERichCurveExtrapolation)InExtrapolation;
    ProcessEvent(func, &params);
}
void UMovieSceneScriptingFloatChannel::RemoveDefault() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.RemoveDefault"));
    struct Params_RemoveDefault {
    }; // Size: 0x0
    Params_RemoveDefault params{};
    ProcessEvent(func, &params);
}
float UMovieSceneScriptingFloatChannel::GetDefault() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault"));
    struct Params_GetDefault {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDefault params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UMovieSceneScriptingFloatChannel::SetDefault(float InDefaultValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.SetDefault"));
    struct Params_SetDefault {
        float InDefaultValue; // 0x0
    }; // Size: 0x4
    Params_SetDefault params{};
    params.InDefaultValue = (float)InDefaultValue;
    ProcessEvent(func, &params);
}
void UMovieSceneScriptingFloatChannel::RemoveKey(UMovieSceneScriptingKey* Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.RemoveKey"));
    struct Params_RemoveKey {
        UMovieSceneScriptingKey* Key; // 0x0
    }; // Size: 0x8
    Params_RemoveKey params{};
    params.Key = (UMovieSceneScriptingKey*)Key;
    ProcessEvent(func, &params);
}
ERichCurveExtrapolation UMovieSceneScriptingFloatChannel::GetPostInfinityExtrapolation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation"));
    struct Params_GetPostInfinityExtrapolation {
        ERichCurveExtrapolation ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPostInfinityExtrapolation params{};
    ProcessEvent(func, &params);
    return (ERichCurveExtrapolation)params.ReturnValue;
}
int32_t UMovieSceneScriptingFloatChannel::GetNumKeys() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys"));
    struct Params_GetNumKeys {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumKeys params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingFloatChannel::GetKeys() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys"));
    struct Params_GetKeys {
        TArray<UMovieSceneScriptingKey*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetKeys params{};
    ProcessEvent(func, &params);
    return (TArray<UMovieSceneScriptingKey*>)params.ReturnValue;
}
TArray<float> UMovieSceneScriptingFloatChannel::EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys"));
    struct Params_EvaluateKeys {
        FSequencerScriptingRange Range; // 0x0
        FFrameRate FrameRate; // 0x14
        char pad_1c[0x4];
        TArray<float> ReturnValue; // 0x20
    }; // Size: 0x30
    Params_EvaluateKeys params{};
    params.Range = (FSequencerScriptingRange)Range;
    params.FrameRate = (FFrameRate)FrameRate;
    ProcessEvent(func, &params);
    return (TArray<float>)params.ReturnValue;
}
UMovieSceneScriptingFloatKey* UMovieSceneScriptingFloatChannel::AddKey(FFrameNumber& InTime, float NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.AddKey"));
    struct Params_AddKey {
        FFrameNumber InTime; // 0x0
        float NewValue; // 0x4
        float SubFrame; // 0x8
        ESequenceTimeUnit TimeUnit; // 0xc
        EMovieSceneKeyInterpolation InInterpolation; // 0xd
        char pad_e[0x2];
        UMovieSceneScriptingFloatKey* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_AddKey params{};
    params.InTime = (FFrameNumber)InTime;
    params.NewValue = (float)NewValue;
    params.SubFrame = (float)SubFrame;
    params.TimeUnit = (ESequenceTimeUnit)TimeUnit;
    params.InInterpolation = (EMovieSceneKeyInterpolation)InInterpolation;
    ProcessEvent(func, &params);
    InTime = params.InTime;
    return (UMovieSceneScriptingFloatKey*)params.ReturnValue;
}
FSequencerScriptingRange UMovieSceneScriptingFloatChannel::ComputeEffectiveRange() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange"));
    struct Params_ComputeEffectiveRange {
        FSequencerScriptingRange ReturnValue; // 0x0
    }; // Size: 0x14
    Params_ComputeEffectiveRange params{};
    ProcessEvent(func, &params);
    return (FSequencerScriptingRange)params.ReturnValue;
}

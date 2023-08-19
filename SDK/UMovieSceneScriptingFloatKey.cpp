#include "ERichCurveInterpMode.hpp"
#include "ERichCurveTangentMode.hpp"
#include "ERichCurveTangentWeightMode.hpp"
#include "ESequenceTimeUnit.hpp"
#include "FFrameNumber.hpp"
#include "FFrameTime.hpp"
#include "UFunction.hpp"
#include "UMovieSceneScriptingFloatKey.hpp"
#include "UMovieSceneScriptingKey.hpp"
UMovieSceneScriptingFloatKey* UMovieSceneScriptingFloatKey::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.MovieSceneScriptingFloatKey");
    return (UMovieSceneScriptingFloatKey*)res;
}
void UMovieSceneScriptingFloatKey::SetValue(float InNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetValue"));
    struct Params_SetValue {
        float InNewValue; // 0x0
    }; // Size: 0x4
    Params_SetValue params{};
    params.InNewValue = (float)InNewValue;
    ProcessEvent(func, &params);
}
void UMovieSceneScriptingFloatKey::SetTime(FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetTime"));
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
void UMovieSceneScriptingFloatKey::SetTangentMode(ERichCurveTangentMode InNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode"));
    struct Params_SetTangentMode {
        ERichCurveTangentMode InNewValue; // 0x0
    }; // Size: 0x1
    Params_SetTangentMode params{};
    params.InNewValue = (ERichCurveTangentMode)InNewValue;
    ProcessEvent(func, &params);
}
ERichCurveTangentWeightMode UMovieSceneScriptingFloatKey::GetTangentWeightMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode"));
    struct Params_GetTangentWeightMode {
        ERichCurveTangentWeightMode ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetTangentWeightMode params{};
    ProcessEvent(func, &params);
    return (ERichCurveTangentWeightMode)params.ReturnValue;
}
void UMovieSceneScriptingFloatKey::SetInterpolationMode(ERichCurveInterpMode InNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode"));
    struct Params_SetInterpolationMode {
        ERichCurveInterpMode InNewValue; // 0x0
    }; // Size: 0x1
    Params_SetInterpolationMode params{};
    params.InNewValue = (ERichCurveInterpMode)InNewValue;
    ProcessEvent(func, &params);
}
void UMovieSceneScriptingFloatKey::SetTangentWeightMode(ERichCurveTangentWeightMode InNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode"));
    struct Params_SetTangentWeightMode {
        ERichCurveTangentWeightMode InNewValue; // 0x0
    }; // Size: 0x1
    Params_SetTangentWeightMode params{};
    params.InNewValue = (ERichCurveTangentWeightMode)InNewValue;
    ProcessEvent(func, &params);
}
void UMovieSceneScriptingFloatKey::SetLeaveTangentWeight(float InNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight"));
    struct Params_SetLeaveTangentWeight {
        float InNewValue; // 0x0
    }; // Size: 0x4
    Params_SetLeaveTangentWeight params{};
    params.InNewValue = (float)InNewValue;
    ProcessEvent(func, &params);
}
void UMovieSceneScriptingFloatKey::SetLeaveTangent(float InNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent"));
    struct Params_SetLeaveTangent {
        float InNewValue; // 0x0
    }; // Size: 0x4
    Params_SetLeaveTangent params{};
    params.InNewValue = (float)InNewValue;
    ProcessEvent(func, &params);
}
void UMovieSceneScriptingFloatKey::SetArriveTangentWeight(float InNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight"));
    struct Params_SetArriveTangentWeight {
        float InNewValue; // 0x0
    }; // Size: 0x4
    Params_SetArriveTangentWeight params{};
    params.InNewValue = (float)InNewValue;
    ProcessEvent(func, &params);
}
void UMovieSceneScriptingFloatKey::SetArriveTangent(float InNewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent"));
    struct Params_SetArriveTangent {
        float InNewValue; // 0x0
    }; // Size: 0x4
    Params_SetArriveTangent params{};
    params.InNewValue = (float)InNewValue;
    ProcessEvent(func, &params);
}
float UMovieSceneScriptingFloatKey::GetValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetValue"));
    struct Params_GetValue {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetValue params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UMovieSceneScriptingFloatKey::GetArriveTangentWeight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight"));
    struct Params_GetArriveTangentWeight {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetArriveTangentWeight params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FFrameTime UMovieSceneScriptingFloatKey::GetTime(ESequenceTimeUnit TimeUnit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetTime"));
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
ERichCurveTangentMode UMovieSceneScriptingFloatKey::GetTangentMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode"));
    struct Params_GetTangentMode {
        ERichCurveTangentMode ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetTangentMode params{};
    ProcessEvent(func, &params);
    return (ERichCurveTangentMode)params.ReturnValue;
}
float UMovieSceneScriptingFloatKey::GetLeaveTangentWeight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight"));
    struct Params_GetLeaveTangentWeight {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetLeaveTangentWeight params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UMovieSceneScriptingFloatKey::GetLeaveTangent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent"));
    struct Params_GetLeaveTangent {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetLeaveTangent params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
ERichCurveInterpMode UMovieSceneScriptingFloatKey::GetInterpolationMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode"));
    struct Params_GetInterpolationMode {
        ERichCurveInterpMode ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetInterpolationMode params{};
    ProcessEvent(func, &params);
    return (ERichCurveInterpMode)params.ReturnValue;
}
float UMovieSceneScriptingFloatKey::GetArriveTangent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent"));
    struct Params_GetArriveTangent {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetArriveTangent params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}

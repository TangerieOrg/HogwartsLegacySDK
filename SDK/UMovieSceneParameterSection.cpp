#include "FBoolParameterNameAndCurve.hpp"
#include "FColorParameterNameAndCurves.hpp"
#include "FFrameNumber.hpp"
#include "FLinearColor.hpp"
#include "FScalarParameterNameAndCurve.hpp"
#include "FTransform.hpp"
#include "FTransformParameterNameAndCurves.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "FVector2DParameterNameAndCurves.hpp"
#include "FVectorParameterNameAndCurves.hpp"
#include "UFunction.hpp"
#include "UMovieSceneParameterSection.hpp"
#include "UMovieSceneSection.hpp"
bool UMovieSceneParameterSection::RemoveColorParameter(FName InParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter"));
    struct Params_RemoveColorParameter {
        FName InParameterName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RemoveColorParameter params{};
    params.InParameterName = (FName)InParameterName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UMovieSceneParameterSection* UMovieSceneParameterSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneParameterSection");
    return (UMovieSceneParameterSection*)res;
}
bool UMovieSceneParameterSection::RemoveScalarParameter(FName InParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter"));
    struct Params_RemoveScalarParameter {
        FName InParameterName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RemoveScalarParameter params{};
    params.InParameterName = (FName)InParameterName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMovieSceneParameterSection::RemoveVectorParameter(FName InParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter"));
    struct Params_RemoveVectorParameter {
        FName InParameterName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RemoveVectorParameter params{};
    params.InParameterName = (FName)InParameterName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMovieSceneParameterSection::RemoveVector2DParameter(FName InParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter"));
    struct Params_RemoveVector2DParameter {
        FName InParameterName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RemoveVector2DParameter params{};
    params.InParameterName = (FName)InParameterName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMovieSceneParameterSection::GetParameterNames() {}
void UMovieSceneParameterSection::AddScalarParameterKey(FName InParameterName, FFrameNumber InTime, float InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey"));
    struct Params_AddScalarParameterKey {
        FName InParameterName; // 0x0
        FFrameNumber InTime; // 0x8
        float InValue; // 0xc
    }; // Size: 0x10
    Params_AddScalarParameterKey params{};
    params.InParameterName = (FName)InParameterName;
    params.InTime = (FFrameNumber)InTime;
    params.InValue = (float)InValue;
    ProcessEvent(func, &params);
}
bool UMovieSceneParameterSection::RemoveTransformParameter(FName InParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter"));
    struct Params_RemoveTransformParameter {
        FName InParameterName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RemoveTransformParameter params{};
    params.InParameterName = (FName)InParameterName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMovieSceneParameterSection::RemoveBoolParameter(FName InParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter"));
    struct Params_RemoveBoolParameter {
        FName InParameterName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RemoveBoolParameter params{};
    params.InParameterName = (FName)InParameterName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMovieSceneParameterSection::AddVectorParameterKey(FName InParameterName, FFrameNumber InTime, FVector InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey"));
    struct Params_AddVectorParameterKey {
        FName InParameterName; // 0x0
        FFrameNumber InTime; // 0x8
        FVector InValue; // 0xc
    }; // Size: 0x18
    Params_AddVectorParameterKey params{};
    params.InParameterName = (FName)InParameterName;
    params.InTime = (FFrameNumber)InTime;
    params.InValue = (FVector)InValue;
    ProcessEvent(func, &params);
}
void UMovieSceneParameterSection::AddVector2DParameterKey(FName InParameterName, FFrameNumber InTime, FVector2D InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey"));
    struct Params_AddVector2DParameterKey {
        FName InParameterName; // 0x0
        FFrameNumber InTime; // 0x8
        FVector2D InValue; // 0xc
    }; // Size: 0x14
    Params_AddVector2DParameterKey params{};
    params.InParameterName = (FName)InParameterName;
    params.InTime = (FFrameNumber)InTime;
    params.InValue = (FVector2D)InValue;
    ProcessEvent(func, &params);
}
void UMovieSceneParameterSection::AddTransformParameterKey(FName InParameterName, FFrameNumber InTime, FTransform& InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey"));
    struct Params_AddTransformParameterKey {
        FName InParameterName; // 0x0
        FFrameNumber InTime; // 0x8
        char pad_c[0x4];
        FTransform InValue; // 0x10
    }; // Size: 0x40
    Params_AddTransformParameterKey params{};
    params.InParameterName = (FName)InParameterName;
    params.InTime = (FFrameNumber)InTime;
    params.InValue = (FTransform)InValue;
    ProcessEvent(func, &params);
    InValue = params.InValue;
}
void UMovieSceneParameterSection::AddColorParameterKey(FName InParameterName, FFrameNumber InTime, FLinearColor InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey"));
    struct Params_AddColorParameterKey {
        FName InParameterName; // 0x0
        FFrameNumber InTime; // 0x8
        FLinearColor InValue; // 0xc
    }; // Size: 0x1c
    Params_AddColorParameterKey params{};
    params.InParameterName = (FName)InParameterName;
    params.InTime = (FFrameNumber)InTime;
    params.InValue = (FLinearColor)InValue;
    ProcessEvent(func, &params);
}
void UMovieSceneParameterSection::AddBoolParameterKey(FName InParameterName, FFrameNumber InTime, bool InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey"));
    struct Params_AddBoolParameterKey {
        FName InParameterName; // 0x0
        FFrameNumber InTime; // 0x8
        bool InValue; // 0xc
    }; // Size: 0xd
    Params_AddBoolParameterKey params{};
    params.InParameterName = (FName)InParameterName;
    params.InTime = (FFrameNumber)InTime;
    params.InValue = (bool)InValue;
    ProcessEvent(func, &params);
}

#include "EMovieSceneCaptureProtocolState.hpp"
#include "UFunction.hpp"
#include "UMovieSceneCaptureProtocolBase.hpp"
#include "UObject.hpp"
UMovieSceneCaptureProtocolBase* UMovieSceneCaptureProtocolBase::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase");
    return (UMovieSceneCaptureProtocolBase*)res;
}
EMovieSceneCaptureProtocolState UMovieSceneCaptureProtocolBase::GetState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState"));
    struct Params_GetState {
        EMovieSceneCaptureProtocolState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetState params{};
    ProcessEvent(func, &params);
    return (EMovieSceneCaptureProtocolState)params.ReturnValue;
}
bool UMovieSceneCaptureProtocolBase::IsCapturing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing"));
    struct Params_IsCapturing {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCapturing params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}

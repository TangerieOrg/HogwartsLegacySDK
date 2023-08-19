#include "UFunction.hpp"
#include "UMovieSceneAudioCaptureProtocolBase.hpp"
#include "UMovieSceneCaptureEnvironment.hpp"
#include "UMovieSceneImageCaptureProtocolBase.hpp"
#include "UObject.hpp"
UMovieSceneImageCaptureProtocolBase* UMovieSceneCaptureEnvironment::FindImageCaptureProtocol() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol"));
    struct Params_FindImageCaptureProtocol {
        UMovieSceneImageCaptureProtocolBase* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_FindImageCaptureProtocol params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMovieSceneImageCaptureProtocolBase*)params.ReturnValue;
}
UMovieSceneCaptureEnvironment* UMovieSceneCaptureEnvironment::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneCapture.MovieSceneCaptureEnvironment");
    return (UMovieSceneCaptureEnvironment*)res;
}
UMovieSceneAudioCaptureProtocolBase* UMovieSceneCaptureEnvironment::FindAudioCaptureProtocol() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol"));
    struct Params_FindAudioCaptureProtocol {
        UMovieSceneAudioCaptureProtocolBase* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_FindAudioCaptureProtocol params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMovieSceneAudioCaptureProtocolBase*)params.ReturnValue;
}
bool UMovieSceneCaptureEnvironment::IsCaptureInProgress() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress"));
    struct Params_IsCaptureInProgress {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCaptureInProgress params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UMovieSceneCaptureEnvironment::GetCaptureElapsedTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime"));
    struct Params_GetCaptureElapsedTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCaptureElapsedTime params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UMovieSceneCaptureEnvironment::GetCaptureFrameNumber() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber"));
    struct Params_GetCaptureFrameNumber {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCaptureFrameNumber params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}

#include "FMovieSceneCaptureSettings.hpp"
#include "FSoftClassPath.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UMovieSceneAudioCaptureProtocolBase.hpp"
#include "UMovieSceneCapture.hpp"
#include "UMovieSceneCaptureProtocolBase.hpp"
#include "UMovieSceneImageCaptureProtocolBase.hpp"
#include "UObject.hpp"
UMovieSceneCapture* UMovieSceneCapture::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneCapture.MovieSceneCapture");
    return (UMovieSceneCapture*)res;
}
UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetAudioCaptureProtocol() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol"));
    struct Params_GetAudioCaptureProtocol {
        UMovieSceneCaptureProtocolBase* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAudioCaptureProtocol params{};
    ProcessEvent(func, &params);
    return (UMovieSceneCaptureProtocolBase*)params.ReturnValue;
}
void UMovieSceneCapture::SetImageCaptureProtocolType(UClass* ProtocolType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType"));
    struct Params_SetImageCaptureProtocolType {
        UClass* ProtocolType; // 0x0
    }; // Size: 0x8
    Params_SetImageCaptureProtocolType params{};
    params.ProtocolType = (UClass*)ProtocolType;
    ProcessEvent(func, &params);
}
void UMovieSceneCapture::SetAudioCaptureProtocolType(UClass* ProtocolType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType"));
    struct Params_SetAudioCaptureProtocolType {
        UClass* ProtocolType; // 0x0
    }; // Size: 0x8
    Params_SetAudioCaptureProtocolType params{};
    params.ProtocolType = (UClass*)ProtocolType;
    ProcessEvent(func, &params);
}
UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetImageCaptureProtocol() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol"));
    struct Params_GetImageCaptureProtocol {
        UMovieSceneCaptureProtocolBase* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetImageCaptureProtocol params{};
    ProcessEvent(func, &params);
    return (UMovieSceneCaptureProtocolBase*)params.ReturnValue;
}

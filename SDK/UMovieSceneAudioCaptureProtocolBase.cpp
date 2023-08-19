#include "UMovieSceneAudioCaptureProtocolBase.hpp"
#include "UMovieSceneCaptureProtocolBase.hpp"
UMovieSceneAudioCaptureProtocolBase* UMovieSceneAudioCaptureProtocolBase::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneCapture.MovieSceneAudioCaptureProtocolBase");
    return (UMovieSceneAudioCaptureProtocolBase*)res;
}

#include "UMovieSceneCaptureProtocolBase.hpp"
#include "UMovieSceneImageCaptureProtocolBase.hpp"
UMovieSceneImageCaptureProtocolBase* UMovieSceneImageCaptureProtocolBase::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneCapture.MovieSceneImageCaptureProtocolBase");
    return (UMovieSceneImageCaptureProtocolBase*)res;
}

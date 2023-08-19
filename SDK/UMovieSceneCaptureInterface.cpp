#include "UInterface.hpp"
#include "UMovieSceneCaptureInterface.hpp"
UMovieSceneCaptureInterface* UMovieSceneCaptureInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneCapture.MovieSceneCaptureInterface");
    return (UMovieSceneCaptureInterface*)res;
}

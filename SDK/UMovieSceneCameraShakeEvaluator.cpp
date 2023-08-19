#include "UMovieSceneCameraShakeEvaluator.hpp"
#include "UObject.hpp"
UMovieSceneCameraShakeEvaluator* UMovieSceneCameraShakeEvaluator::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneCameraShakeEvaluator");
    return (UMovieSceneCameraShakeEvaluator*)res;
}

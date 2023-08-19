#include "UMovieSceneCameraShakeEvaluator.hpp"
#include "UMovieSceneMatineeCameraShakeEvaluator.hpp"
UMovieSceneMatineeCameraShakeEvaluator* UMovieSceneMatineeCameraShakeEvaluator::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayCameras.MovieSceneMatineeCameraShakeEvaluator");
    return (UMovieSceneMatineeCameraShakeEvaluator*)res;
}

#include "UInterface.hpp"
#include "UMovieSceneEvaluationHook.hpp"
UMovieSceneEvaluationHook* UMovieSceneEvaluationHook::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneEvaluationHook");
    return (UMovieSceneEvaluationHook*)res;
}

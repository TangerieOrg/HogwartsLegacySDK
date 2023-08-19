#include "UMovieSceneEntitySystem.hpp"
#include "UMovieSceneEvaluationHookSystem.hpp"
UMovieSceneEvaluationHookSystem* UMovieSceneEvaluationHookSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneEvaluationHookSystem");
    return (UMovieSceneEvaluationHookSystem*)res;
}

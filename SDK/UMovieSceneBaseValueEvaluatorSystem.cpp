#include "UMovieSceneBaseValueEvaluatorSystem.hpp"
#include "UMovieSceneEntitySystem.hpp"
UMovieSceneBaseValueEvaluatorSystem* UMovieSceneBaseValueEvaluatorSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem");
    return (UMovieSceneBaseValueEvaluatorSystem*)res;
}

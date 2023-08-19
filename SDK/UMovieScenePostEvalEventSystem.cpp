#include "UMovieSceneEventSystem.hpp"
#include "UMovieScenePostEvalEventSystem.hpp"
UMovieScenePostEvalEventSystem* UMovieScenePostEvalEventSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieScenePostEvalEventSystem");
    return (UMovieScenePostEvalEventSystem*)res;
}

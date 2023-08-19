#include "UMovieSceneEntitySystem.hpp"
#include "UMovieSceneEvalTimeSystem.hpp"
UMovieSceneEvalTimeSystem* UMovieSceneEvalTimeSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneEvalTimeSystem");
    return (UMovieSceneEvalTimeSystem*)res;
}

#include "UMovieSceneBoolPropertySystem.hpp"
#include "UMovieScenePropertySystem.hpp"
UMovieSceneBoolPropertySystem* UMovieSceneBoolPropertySystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneBoolPropertySystem");
    return (UMovieSceneBoolPropertySystem*)res;
}

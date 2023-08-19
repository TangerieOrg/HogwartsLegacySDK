#include "UMovieSceneBytePropertySystem.hpp"
#include "UMovieScenePropertySystem.hpp"
UMovieSceneBytePropertySystem* UMovieSceneBytePropertySystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneBytePropertySystem");
    return (UMovieSceneBytePropertySystem*)res;
}

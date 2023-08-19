#include "UMovieSceneColorPropertySystem.hpp"
#include "UMovieScenePropertySystem.hpp"
UMovieSceneColorPropertySystem* UMovieSceneColorPropertySystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneColorPropertySystem");
    return (UMovieSceneColorPropertySystem*)res;
}

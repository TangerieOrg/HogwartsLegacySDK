#include "UMovieScenePropertySystem.hpp"
#include "UMovieSceneVectorPropertySystem.hpp"
UMovieSceneVectorPropertySystem* UMovieSceneVectorPropertySystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneVectorPropertySystem");
    return (UMovieSceneVectorPropertySystem*)res;
}

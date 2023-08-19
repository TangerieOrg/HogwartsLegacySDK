#include "UMovieSceneEntitySystem.hpp"
#include "UMovieScenePropertyInstantiatorSystem.hpp"
#include "UMovieScenePropertySystem.hpp"
UMovieScenePropertySystem* UMovieScenePropertySystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieScenePropertySystem");
    return (UMovieScenePropertySystem*)res;
}

#include "UMovieSceneEntityInstantiatorSystem.hpp"
#include "UMovieScenePropertyInstantiatorSystem.hpp"
UMovieScenePropertyInstantiatorSystem* UMovieScenePropertyInstantiatorSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieScenePropertyInstantiatorSystem");
    return (UMovieScenePropertyInstantiatorSystem*)res;
}

#include "UMovieSceneEntityInstantiatorSystem.hpp"
#include "UMovieSceneInterrogatedPropertyInstantiatorSystem.hpp"
UMovieSceneInterrogatedPropertyInstantiatorSystem* UMovieSceneInterrogatedPropertyInstantiatorSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem");
    return (UMovieSceneInterrogatedPropertyInstantiatorSystem*)res;
}

#include "UMovieSceneEntityInstantiatorSystem.hpp"
#include "UMovieSceneMasterInstantiatorSystem.hpp"
UMovieSceneMasterInstantiatorSystem* UMovieSceneMasterInstantiatorSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneMasterInstantiatorSystem");
    return (UMovieSceneMasterInstantiatorSystem*)res;
}

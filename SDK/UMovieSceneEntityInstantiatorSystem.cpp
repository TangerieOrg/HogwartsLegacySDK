#include "UMovieSceneEntityInstantiatorSystem.hpp"
#include "UMovieSceneEntitySystem.hpp"
UMovieSceneEntityInstantiatorSystem* UMovieSceneEntityInstantiatorSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneEntityInstantiatorSystem");
    return (UMovieSceneEntityInstantiatorSystem*)res;
}

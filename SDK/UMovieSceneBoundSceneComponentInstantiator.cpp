#include "UMovieSceneBoundSceneComponentInstantiator.hpp"
#include "UMovieSceneEntityInstantiatorSystem.hpp"
UMovieSceneBoundSceneComponentInstantiator* UMovieSceneBoundSceneComponentInstantiator::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneBoundSceneComponentInstantiator");
    return (UMovieSceneBoundSceneComponentInstantiator*)res;
}

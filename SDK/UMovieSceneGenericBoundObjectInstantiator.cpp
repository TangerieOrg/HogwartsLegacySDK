#include "UMovieSceneEntityInstantiatorSystem.hpp"
#include "UMovieSceneGenericBoundObjectInstantiator.hpp"
UMovieSceneGenericBoundObjectInstantiator* UMovieSceneGenericBoundObjectInstantiator::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneGenericBoundObjectInstantiator");
    return (UMovieSceneGenericBoundObjectInstantiator*)res;
}

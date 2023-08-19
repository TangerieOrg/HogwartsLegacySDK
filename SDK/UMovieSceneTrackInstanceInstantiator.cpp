#include "UMovieSceneEntityInstantiatorSystem.hpp"
#include "UMovieSceneTrackInstanceInstantiator.hpp"
UMovieSceneTrackInstanceInstantiator* UMovieSceneTrackInstanceInstantiator::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneTrackInstanceInstantiator");
    return (UMovieSceneTrackInstanceInstantiator*)res;
}

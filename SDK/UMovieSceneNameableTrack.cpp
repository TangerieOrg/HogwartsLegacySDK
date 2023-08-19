#include "UMovieSceneNameableTrack.hpp"
#include "UMovieSceneTrack.hpp"
UMovieSceneNameableTrack* UMovieSceneNameableTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneNameableTrack");
    return (UMovieSceneNameableTrack*)res;
}

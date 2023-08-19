#include "UMovieSceneNameableTrack.hpp"
#include "UMovieSceneSection.hpp"
#include "UMovieSceneSubTrack.hpp"
UMovieSceneSubTrack* UMovieSceneSubTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneSubTrack");
    return (UMovieSceneSubTrack*)res;
}

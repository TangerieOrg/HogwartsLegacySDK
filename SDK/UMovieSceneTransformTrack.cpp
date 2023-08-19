#include "UMovieScenePropertyTrack.hpp"
#include "UMovieSceneTransformTrack.hpp"
UMovieSceneTransformTrack* UMovieSceneTransformTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneTransformTrack");
    return (UMovieSceneTransformTrack*)res;
}

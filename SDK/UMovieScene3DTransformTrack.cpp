#include "UMovieScene3DTransformTrack.hpp"
#include "UMovieScenePropertyTrack.hpp"
UMovieScene3DTransformTrack* UMovieScene3DTransformTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieScene3DTransformTrack");
    return (UMovieScene3DTransformTrack*)res;
}

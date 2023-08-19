#include "UMovieScene2DTransformTrack.hpp"
#include "UMovieScenePropertyTrack.hpp"
UMovieScene2DTransformTrack* UMovieScene2DTransformTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.MovieScene2DTransformTrack");
    return (UMovieScene2DTransformTrack*)res;
}

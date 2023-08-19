#include "UMovieScene3DConstraintTrack.hpp"
#include "UMovieScene3DPathTrack.hpp"
UMovieScene3DPathTrack* UMovieScene3DPathTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieScene3DPathTrack");
    return (UMovieScene3DPathTrack*)res;
}

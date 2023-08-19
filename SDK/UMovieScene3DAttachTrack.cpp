#include "UMovieScene3DAttachTrack.hpp"
#include "UMovieScene3DConstraintTrack.hpp"
UMovieScene3DAttachTrack* UMovieScene3DAttachTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieScene3DAttachTrack");
    return (UMovieScene3DAttachTrack*)res;
}

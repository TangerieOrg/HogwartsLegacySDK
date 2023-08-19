#include "UMovieScene3DConstraintTrack.hpp"
#include "UMovieSceneSection.hpp"
#include "UMovieSceneTrack.hpp"
UMovieScene3DConstraintTrack* UMovieScene3DConstraintTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieScene3DConstraintTrack");
    return (UMovieScene3DConstraintTrack*)res;
}

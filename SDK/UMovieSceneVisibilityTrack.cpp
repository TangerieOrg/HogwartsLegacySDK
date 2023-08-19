#include "UMovieSceneBoolTrack.hpp"
#include "UMovieSceneVisibilityTrack.hpp"
UMovieSceneVisibilityTrack* UMovieSceneVisibilityTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneVisibilityTrack");
    return (UMovieSceneVisibilityTrack*)res;
}

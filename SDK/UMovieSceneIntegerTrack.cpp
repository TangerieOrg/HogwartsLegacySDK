#include "UMovieSceneIntegerTrack.hpp"
#include "UMovieScenePropertyTrack.hpp"
UMovieSceneIntegerTrack* UMovieSceneIntegerTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneIntegerTrack");
    return (UMovieSceneIntegerTrack*)res;
}

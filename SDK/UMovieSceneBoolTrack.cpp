#include "UMovieSceneBoolTrack.hpp"
#include "UMovieScenePropertyTrack.hpp"
UMovieSceneBoolTrack* UMovieSceneBoolTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneBoolTrack");
    return (UMovieSceneBoolTrack*)res;
}

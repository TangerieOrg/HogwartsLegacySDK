#include "UMovieSceneFloatTrack.hpp"
#include "UMovieSceneSlomoTrack.hpp"
UMovieSceneSlomoTrack* UMovieSceneSlomoTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneSlomoTrack");
    return (UMovieSceneSlomoTrack*)res;
}

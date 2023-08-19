#include "UMovieSceneFadeTrack.hpp"
#include "UMovieSceneFloatTrack.hpp"
UMovieSceneFadeTrack* UMovieSceneFadeTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneFadeTrack");
    return (UMovieSceneFadeTrack*)res;
}

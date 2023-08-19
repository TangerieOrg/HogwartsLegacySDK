#include "UMovieSceneFloatTrack.hpp"
#include "UMovieScenePropertyTrack.hpp"
UMovieSceneFloatTrack* UMovieSceneFloatTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneFloatTrack");
    return (UMovieSceneFloatTrack*)res;
}

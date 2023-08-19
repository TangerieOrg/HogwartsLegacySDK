#include "UMovieSceneColorTrack.hpp"
#include "UMovieScenePropertyTrack.hpp"
UMovieSceneColorTrack* UMovieSceneColorTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneColorTrack");
    return (UMovieSceneColorTrack*)res;
}

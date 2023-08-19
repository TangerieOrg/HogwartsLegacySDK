#include "UMovieScenePropertyTrack.hpp"
#include "UMovieSceneStringTrack.hpp"
UMovieSceneStringTrack* UMovieSceneStringTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneStringTrack");
    return (UMovieSceneStringTrack*)res;
}

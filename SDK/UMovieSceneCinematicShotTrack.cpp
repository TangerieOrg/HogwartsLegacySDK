#include "UMovieSceneCinematicShotTrack.hpp"
#include "UMovieSceneSubTrack.hpp"
UMovieSceneCinematicShotTrack* UMovieSceneCinematicShotTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneCinematicShotTrack");
    return (UMovieSceneCinematicShotTrack*)res;
}

#include "UMovieSceneCameraAnimTrack.hpp"
#include "UMovieSceneNameableTrack.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneCameraAnimTrack* UMovieSceneCameraAnimTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneCameraAnimTrack");
    return (UMovieSceneCameraAnimTrack*)res;
}

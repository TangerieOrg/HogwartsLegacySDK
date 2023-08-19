#include "UMovieSceneCameraShakeTrack.hpp"
#include "UMovieSceneNameableTrack.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneCameraShakeTrack* UMovieSceneCameraShakeTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneCameraShakeTrack");
    return (UMovieSceneCameraShakeTrack*)res;
}

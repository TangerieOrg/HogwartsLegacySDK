#include "UMovieSceneCameraShakeSourceShakeTrack.hpp"
#include "UMovieSceneNameableTrack.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneCameraShakeSourceShakeTrack* UMovieSceneCameraShakeSourceShakeTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack");
    return (UMovieSceneCameraShakeSourceShakeTrack*)res;
}

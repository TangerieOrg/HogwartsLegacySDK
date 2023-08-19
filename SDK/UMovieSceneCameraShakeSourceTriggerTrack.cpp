#include "UMovieSceneCameraShakeSourceTriggerTrack.hpp"
#include "UMovieSceneSection.hpp"
#include "UMovieSceneTrack.hpp"
UMovieSceneCameraShakeSourceTriggerTrack* UMovieSceneCameraShakeSourceTriggerTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack");
    return (UMovieSceneCameraShakeSourceTriggerTrack*)res;
}

#include "FMovieSceneCameraShakeSourceTriggerChannel.hpp"
#include "UMovieSceneCameraShakeSourceTriggerSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneCameraShakeSourceTriggerSection* UMovieSceneCameraShakeSourceTriggerSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection");
    return (UMovieSceneCameraShakeSourceTriggerSection*)res;
}

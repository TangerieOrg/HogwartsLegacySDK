#include "FMovieSceneEventChannel.hpp"
#include "UMovieSceneEventSectionBase.hpp"
#include "UMovieSceneEventTriggerSection.hpp"
UMovieSceneEventTriggerSection* UMovieSceneEventTriggerSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneEventTriggerSection");
    return (UMovieSceneEventTriggerSection*)res;
}

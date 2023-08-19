#include "FMovieSceneEvent.hpp"
#include "UMovieSceneEventRepeaterSection.hpp"
#include "UMovieSceneEventSectionBase.hpp"
UMovieSceneEventRepeaterSection* UMovieSceneEventRepeaterSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneEventRepeaterSection");
    return (UMovieSceneEventRepeaterSection*)res;
}

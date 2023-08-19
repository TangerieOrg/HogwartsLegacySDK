#include "UMovieSceneEventSectionBase.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneEventSectionBase* UMovieSceneEventSectionBase::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneEventSectionBase");
    return (UMovieSceneEventSectionBase*)res;
}

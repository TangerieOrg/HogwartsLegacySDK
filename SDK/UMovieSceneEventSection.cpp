#include "FMovieSceneEventSectionData.hpp"
#include "FNameCurve.hpp"
#include "UMovieSceneEventSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneEventSection* UMovieSceneEventSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneEventSection");
    return (UMovieSceneEventSection*)res;
}

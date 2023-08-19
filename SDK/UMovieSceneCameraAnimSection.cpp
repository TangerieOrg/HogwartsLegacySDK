#include "FMovieSceneCameraAnimSectionData.hpp"
#include "UCameraAnim.hpp"
#include "UMovieSceneCameraAnimSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneCameraAnimSection* UMovieSceneCameraAnimSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneCameraAnimSection");
    return (UMovieSceneCameraAnimSection*)res;
}

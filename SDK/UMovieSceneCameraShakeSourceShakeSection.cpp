#include "FMovieSceneCameraShakeSectionData.hpp"
#include "UMovieSceneCameraShakeSourceShakeSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneCameraShakeSourceShakeSection* UMovieSceneCameraShakeSourceShakeSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection");
    return (UMovieSceneCameraShakeSourceShakeSection*)res;
}

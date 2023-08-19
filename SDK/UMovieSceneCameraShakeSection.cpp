#include "ECameraShakePlaySpace.hpp"
#include "FMovieSceneCameraShakeSectionData.hpp"
#include "FRotator.hpp"
#include "UClass.hpp"
#include "UMovieSceneCameraShakeSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneCameraShakeSection* UMovieSceneCameraShakeSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneCameraShakeSection");
    return (UMovieSceneCameraShakeSection*)res;
}

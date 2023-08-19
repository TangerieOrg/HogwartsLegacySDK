#include "FMovieSceneSkeletalAnimationParams.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAnimSequence.hpp"
#include "UAnimSequenceBase.hpp"
#include "UMovieSceneSection.hpp"
#include "UMovieSceneSkeletalAnimationSection.hpp"
UMovieSceneSkeletalAnimationSection* UMovieSceneSkeletalAnimationSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSection");
    return (UMovieSceneSkeletalAnimationSection*)res;
}

#include "FMovieScene2DTransformMask.hpp"
#include "FMovieSceneFloatChannel.hpp"
#include "UMovieScene2DTransformSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieScene2DTransformSection* UMovieScene2DTransformSection::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.MovieScene2DTransformSection");
    return (UMovieScene2DTransformSection*)res;
}

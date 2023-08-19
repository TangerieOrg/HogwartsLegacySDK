#include "FMovieSceneFloatChannel.hpp"
#include "FMovieSceneTransformMask.hpp"
#include "UMovieScene3DTransformSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieScene3DTransformSection* UMovieScene3DTransformSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieScene3DTransformSection");
    return (UMovieScene3DTransformSection*)res;
}

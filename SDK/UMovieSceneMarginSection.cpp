#include "FMovieSceneFloatChannel.hpp"
#include "UMovieSceneMarginSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneMarginSection* UMovieSceneMarginSection::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.MovieSceneMarginSection");
    return (UMovieSceneMarginSection*)res;
}

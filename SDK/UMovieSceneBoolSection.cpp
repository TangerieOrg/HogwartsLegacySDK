#include "FMovieSceneBoolChannel.hpp"
#include "UMovieSceneBoolSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneBoolSection* UMovieSceneBoolSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneBoolSection");
    return (UMovieSceneBoolSection*)res;
}

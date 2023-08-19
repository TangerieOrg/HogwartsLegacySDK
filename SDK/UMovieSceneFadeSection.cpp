#include "FLinearColor.hpp"
#include "FMovieSceneFloatChannel.hpp"
#include "UMovieSceneFadeSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneFadeSection* UMovieSceneFadeSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneFadeSection");
    return (UMovieSceneFadeSection*)res;
}

#include "FMovieSceneFloatChannel.hpp"
#include "UMovieSceneColorSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneColorSection* UMovieSceneColorSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneColorSection");
    return (UMovieSceneColorSection*)res;
}

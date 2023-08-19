#include "FMovieSceneFloatChannel.hpp"
#include "UMovieSceneFloatSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneFloatSection* UMovieSceneFloatSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneFloatSection");
    return (UMovieSceneFloatSection*)res;
}

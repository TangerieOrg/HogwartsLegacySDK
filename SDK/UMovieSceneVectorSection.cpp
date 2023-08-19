#include "FMovieSceneFloatChannel.hpp"
#include "UMovieSceneSection.hpp"
#include "UMovieSceneVectorSection.hpp"
UMovieSceneVectorSection* UMovieSceneVectorSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneVectorSection");
    return (UMovieSceneVectorSection*)res;
}

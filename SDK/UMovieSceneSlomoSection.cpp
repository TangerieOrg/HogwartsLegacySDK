#include "FMovieSceneFloatChannel.hpp"
#include "UMovieSceneSection.hpp"
#include "UMovieSceneSlomoSection.hpp"
UMovieSceneSlomoSection* UMovieSceneSlomoSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneSlomoSection");
    return (UMovieSceneSlomoSection*)res;
}

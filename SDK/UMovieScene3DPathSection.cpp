#include "FMovieSceneFloatChannel.hpp"
#include "MovieScene3DPathSection_Axis.hpp"
#include "UMovieScene3DConstraintSection.hpp"
#include "UMovieScene3DPathSection.hpp"
UMovieScene3DPathSection* UMovieScene3DPathSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieScene3DPathSection");
    return (UMovieScene3DPathSection*)res;
}

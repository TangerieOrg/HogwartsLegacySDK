#include "FMovieSceneIntegerChannel.hpp"
#include "UMovieSceneIntegerSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneIntegerSection* UMovieSceneIntegerSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneIntegerSection");
    return (UMovieSceneIntegerSection*)res;
}

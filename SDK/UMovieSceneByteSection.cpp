#include "FMovieSceneByteChannel.hpp"
#include "UMovieSceneByteSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneByteSection* UMovieSceneByteSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneByteSection");
    return (UMovieSceneByteSection*)res;
}

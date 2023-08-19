#include "FMovieSceneByteChannel.hpp"
#include "UMovieSceneEnumSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneEnumSection* UMovieSceneEnumSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneEnumSection");
    return (UMovieSceneEnumSection*)res;
}

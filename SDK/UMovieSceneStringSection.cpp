#include "FMovieSceneStringChannel.hpp"
#include "UMovieSceneSection.hpp"
#include "UMovieSceneStringSection.hpp"
UMovieSceneStringSection* UMovieSceneStringSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneStringSection");
    return (UMovieSceneStringSection*)res;
}

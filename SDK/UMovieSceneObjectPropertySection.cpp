#include "FMovieSceneObjectPathChannel.hpp"
#include "UMovieSceneObjectPropertySection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneObjectPropertySection* UMovieSceneObjectPropertySection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneObjectPropertySection");
    return (UMovieSceneObjectPropertySection*)res;
}

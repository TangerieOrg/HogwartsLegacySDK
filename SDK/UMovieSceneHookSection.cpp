#include "UMovieSceneHookSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneHookSection* UMovieSceneHookSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneHookSection");
    return (UMovieSceneHookSection*)res;
}

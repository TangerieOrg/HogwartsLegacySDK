#include "FMovieSceneEntitySystemGraph.hpp"
#include "UMovieSceneEntitySystemLinker.hpp"
#include "UObject.hpp"
UMovieSceneEntitySystemLinker* UMovieSceneEntitySystemLinker::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneEntitySystemLinker");
    return (UMovieSceneEntitySystemLinker*)res;
}

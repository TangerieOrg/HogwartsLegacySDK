#include "UInterface.hpp"
#include "UMovieSceneEntityProvider.hpp"
UMovieSceneEntityProvider* UMovieSceneEntityProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneEntityProvider");
    return (UMovieSceneEntityProvider*)res;
}

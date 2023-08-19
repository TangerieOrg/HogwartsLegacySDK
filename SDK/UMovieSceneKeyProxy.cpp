#include "UInterface.hpp"
#include "UMovieSceneKeyProxy.hpp"
UMovieSceneKeyProxy* UMovieSceneKeyProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneKeyProxy");
    return (UMovieSceneKeyProxy*)res;
}

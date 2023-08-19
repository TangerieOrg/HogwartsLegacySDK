#include "UInterface.hpp"
#include "UMovieScenePreAnimatedStateSystemInterface.hpp"
UMovieScenePreAnimatedStateSystemInterface* UMovieScenePreAnimatedStateSystemInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieScenePreAnimatedStateSystemInterface");
    return (UMovieScenePreAnimatedStateSystemInterface*)res;
}

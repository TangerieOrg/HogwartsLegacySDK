#include "UInterface.hpp"
#include "UMovieSceneBindingOwnerInterface.hpp"
UMovieSceneBindingOwnerInterface* UMovieSceneBindingOwnerInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneBindingOwnerInterface");
    return (UMovieSceneBindingOwnerInterface*)res;
}

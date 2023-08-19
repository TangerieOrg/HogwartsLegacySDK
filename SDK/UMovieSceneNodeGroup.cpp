#include "UMovieSceneNodeGroup.hpp"
#include "UObject.hpp"
UMovieSceneNodeGroup* UMovieSceneNodeGroup::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneNodeGroup");
    return (UMovieSceneNodeGroup*)res;
}

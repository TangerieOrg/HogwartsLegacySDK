#include "UMovieSceneNodeGroupCollection.hpp"
#include "UObject.hpp"
UMovieSceneNodeGroupCollection* UMovieSceneNodeGroupCollection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneNodeGroupCollection");
    return (UMovieSceneNodeGroupCollection*)res;
}

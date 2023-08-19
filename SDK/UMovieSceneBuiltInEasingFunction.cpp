#include "EMovieSceneBuiltInEasing.hpp"
#include "UMovieSceneBuiltInEasingFunction.hpp"
#include "UObject.hpp"
UMovieSceneBuiltInEasingFunction* UMovieSceneBuiltInEasingFunction::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneBuiltInEasingFunction");
    return (UMovieSceneBuiltInEasingFunction*)res;
}

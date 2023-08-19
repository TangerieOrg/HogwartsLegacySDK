#include "FMovieSceneBindingOverrideData.hpp"
#include "UMovieSceneBindingOverrides.hpp"
#include "UObject.hpp"
UMovieSceneBindingOverrides* UMovieSceneBindingOverrides::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneBindingOverrides");
    return (UMovieSceneBindingOverrides*)res;
}

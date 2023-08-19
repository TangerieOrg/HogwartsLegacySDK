#include "UInterface.hpp"
#include "UMovieSceneFloatDecomposer.hpp"
UMovieSceneFloatDecomposer* UMovieSceneFloatDecomposer::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneFloatDecomposer");
    return (UMovieSceneFloatDecomposer*)res;
}

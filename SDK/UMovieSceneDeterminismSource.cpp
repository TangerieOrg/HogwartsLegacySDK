#include "UInterface.hpp"
#include "UMovieSceneDeterminismSource.hpp"
UMovieSceneDeterminismSource* UMovieSceneDeterminismSource::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneDeterminismSource");
    return (UMovieSceneDeterminismSource*)res;
}

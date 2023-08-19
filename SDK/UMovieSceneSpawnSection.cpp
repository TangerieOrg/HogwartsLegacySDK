#include "UMovieSceneBoolSection.hpp"
#include "UMovieSceneSpawnSection.hpp"
UMovieSceneSpawnSection* UMovieSceneSpawnSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneSpawnSection");
    return (UMovieSceneSpawnSection*)res;
}

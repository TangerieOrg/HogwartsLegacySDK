#include "FMovieSceneObjectPathChannel.hpp"
#include "UMovieScenePrimitiveMaterialSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieScenePrimitiveMaterialSection* UMovieScenePrimitiveMaterialSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieScenePrimitiveMaterialSection");
    return (UMovieScenePrimitiveMaterialSection*)res;
}

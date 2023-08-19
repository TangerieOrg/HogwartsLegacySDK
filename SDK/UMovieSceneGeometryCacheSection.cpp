#include "FMovieSceneGeometryCacheParams.hpp"
#include "UMovieSceneGeometryCacheSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneGeometryCacheSection* UMovieSceneGeometryCacheSection::StaticClass() {
    static auto res = find_uobject("Class /Script/GeometryCacheTracks.MovieSceneGeometryCacheSection");
    return (UMovieSceneGeometryCacheSection*)res;
}

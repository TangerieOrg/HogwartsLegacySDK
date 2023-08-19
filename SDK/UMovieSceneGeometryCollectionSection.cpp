#include "FMovieSceneGeometryCollectionParams.hpp"
#include "UMovieSceneGeometryCollectionSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneGeometryCollectionSection* UMovieSceneGeometryCollectionSection::StaticClass() {
    static auto res = find_uobject("Class /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSection");
    return (UMovieSceneGeometryCollectionSection*)res;
}

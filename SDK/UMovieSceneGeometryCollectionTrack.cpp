#include "UMovieSceneGeometryCollectionTrack.hpp"
#include "UMovieSceneNameableTrack.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneGeometryCollectionTrack* UMovieSceneGeometryCollectionTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionTrack");
    return (UMovieSceneGeometryCollectionTrack*)res;
}

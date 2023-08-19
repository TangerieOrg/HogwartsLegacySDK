#include "UMovieSceneGeometryCacheTrack.hpp"
#include "UMovieSceneNameableTrack.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneGeometryCacheTrack* UMovieSceneGeometryCacheTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/GeometryCacheTracks.MovieSceneGeometryCacheTrack");
    return (UMovieSceneGeometryCacheTrack*)res;
}

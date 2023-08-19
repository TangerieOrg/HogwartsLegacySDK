#include "UMovieScenePrimitiveMaterialTrack.hpp"
#include "UMovieScenePropertyTrack.hpp"
UMovieScenePrimitiveMaterialTrack* UMovieScenePrimitiveMaterialTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieScenePrimitiveMaterialTrack");
    return (UMovieScenePrimitiveMaterialTrack*)res;
}

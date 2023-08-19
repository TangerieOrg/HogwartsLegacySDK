#include "UMovieSceneComponentMaterialTrack.hpp"
#include "UMovieSceneMaterialTrack.hpp"
UMovieSceneComponentMaterialTrack* UMovieSceneComponentMaterialTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneComponentMaterialTrack");
    return (UMovieSceneComponentMaterialTrack*)res;
}

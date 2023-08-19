#include "UMovieSceneMaterialTrack.hpp"
#include "UMovieSceneWidgetMaterialTrack.hpp"
UMovieSceneWidgetMaterialTrack* UMovieSceneWidgetMaterialTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.MovieSceneWidgetMaterialTrack");
    return (UMovieSceneWidgetMaterialTrack*)res;
}

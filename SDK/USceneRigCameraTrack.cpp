#include "UMovieSceneNameableTrack.hpp"
#include "UMovieSceneSection.hpp"
#include "USceneRigCameraTrack.hpp"
USceneRigCameraTrack* USceneRigCameraTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigCameraTrack");
    return (USceneRigCameraTrack*)res;
}

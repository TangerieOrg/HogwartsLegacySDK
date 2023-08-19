#include "FSceneRigCameraParams.hpp"
#include "UMovieSceneSection.hpp"
#include "USceneRigCameraSection.hpp"
USceneRigCameraSection* USceneRigCameraSection::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigCameraSection");
    return (USceneRigCameraSection*)res;
}

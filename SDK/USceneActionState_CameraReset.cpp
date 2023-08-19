#include "USceneActionState_CameraReset.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_CameraReset* USceneActionState_CameraReset::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_CameraReset");
    return (USceneActionState_CameraReset*)res;
}

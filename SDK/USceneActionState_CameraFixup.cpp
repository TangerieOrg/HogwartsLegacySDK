#include "ECameraFixupLayer.hpp"
#include "UCameraFixupOperationState.hpp"
#include "USceneActionState_CameraFixup.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_CameraFixup* USceneActionState_CameraFixup::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_CameraFixup");
    return (USceneActionState_CameraFixup*)res;
}

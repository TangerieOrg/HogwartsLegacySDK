#include "FCameraStackOperationState.hpp"
#include "USceneActionState_CameraStackModification.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_CameraStackModification* USceneActionState_CameraStackModification::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_CameraStackModification");
    return (USceneActionState_CameraStackModification*)res;
}

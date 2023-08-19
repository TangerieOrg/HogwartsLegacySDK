#include "UCameraStackModificationSettings.hpp"
#include "USceneAction_CameraStackModification.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_CameraStackModification* USceneAction_CameraStackModification::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_CameraStackModification");
    return (USceneAction_CameraStackModification*)res;
}

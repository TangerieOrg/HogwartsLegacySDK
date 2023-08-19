#include "ECameraFixupLayer.hpp"
#include "UCameraFixupOperation.hpp"
#include "USceneAction_CameraFixup.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_CameraFixup* USceneAction_CameraFixup::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_CameraFixup");
    return (USceneAction_CameraFixup*)res;
}

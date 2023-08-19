#include "FIKPoseFixupDefinition.hpp"
#include "USceneAction_IKPoseFixup.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_IKPoseFixup* USceneAction_IKPoseFixup::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_IKPoseFixup");
    return (USceneAction_IKPoseFixup*)res;
}

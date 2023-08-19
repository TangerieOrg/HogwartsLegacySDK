#include "USceneActionState_IKPoseFixup.hpp"
#include "USceneAction_IKPoseFixup.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_IKPoseFixup* USceneActionState_IKPoseFixup::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_IKPoseFixup");
    return (USceneActionState_IKPoseFixup*)res;
}

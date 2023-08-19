#include "ABP_SceneRigCameraStackActor_C.hpp"
#include "ASceneRigCameraStackActor.hpp"
#include "UAnimationComponent.hpp"
ABP_SceneRigCameraStackActor_C* ABP_SceneRigCameraStackActor_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/BP_SceneRigCameraStackActor.BP_SceneRigCameraStackActor_C");
    return (ABP_SceneRigCameraStackActor_C*)res;
}

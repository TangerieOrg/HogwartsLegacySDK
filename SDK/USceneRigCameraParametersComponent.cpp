#include "UActorComponent.hpp"
#include "USceneRigCameraParametersComponent.hpp"
USceneRigCameraParametersComponent* USceneRigCameraParametersComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigCameraParametersComponent");
    return (USceneRigCameraParametersComponent*)res;
}

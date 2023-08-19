#include "ESceneRigCameraProxyActor_ValidCameraType.hpp"
#include "FGameplayTagContainer.hpp"
#include "UNameProvider.hpp"
#include "USceneRigCameraProxyActor.hpp"
#include "USceneRigProxyActor.hpp"
USceneRigCameraProxyActor* USceneRigCameraProxyActor::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigCameraProxyActor");
    return (USceneRigCameraProxyActor*)res;
}

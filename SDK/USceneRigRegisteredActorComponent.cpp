#include "UActorComponent.hpp"
#include "USceneRigRegisteredActorComponent.hpp"
USceneRigRegisteredActorComponent* USceneRigRegisteredActorComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigRegisteredActorComponent");
    return (USceneRigRegisteredActorComponent*)res;
}

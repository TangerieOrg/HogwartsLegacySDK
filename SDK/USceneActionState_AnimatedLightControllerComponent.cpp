#include "USceneActionState_AnimatedLightControllerComponent.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_AnimatedLightControllerComponent* USceneActionState_AnimatedLightControllerComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_AnimatedLightControllerComponent");
    return (USceneActionState_AnimatedLightControllerComponent*)res;
}

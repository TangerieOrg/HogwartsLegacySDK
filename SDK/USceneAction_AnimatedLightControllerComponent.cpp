#include "UAnimatedLightsClusterSettings.hpp"
#include "USceneAction_AnimatedLightControllerComponent.hpp"
#include "USceneAction_SpawnActorAllowAsChild.hpp"
USceneAction_AnimatedLightControllerComponent* USceneAction_AnimatedLightControllerComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_AnimatedLightControllerComponent");
    return (USceneAction_AnimatedLightControllerComponent*)res;
}

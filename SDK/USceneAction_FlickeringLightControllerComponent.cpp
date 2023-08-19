#include "UAnimatedLightSettingsAsset.hpp"
#include "USceneAction_AnimatedLightControllerComponent.hpp"
#include "USceneAction_FlickeringLightControllerComponent.hpp"
USceneAction_FlickeringLightControllerComponent* USceneAction_FlickeringLightControllerComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_FlickeringLightControllerComponent");
    return (USceneAction_FlickeringLightControllerComponent*)res;
}

#include "FDynamicLightAdaptationSettings.hpp"
#include "USceneAction_AdaptiveLightControllerComponent.hpp"
#include "USceneAction_AnimatedLightControllerComponent.hpp"
USceneAction_AdaptiveLightControllerComponent* USceneAction_AdaptiveLightControllerComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_AdaptiveLightControllerComponent");
    return (USceneAction_AdaptiveLightControllerComponent*)res;
}

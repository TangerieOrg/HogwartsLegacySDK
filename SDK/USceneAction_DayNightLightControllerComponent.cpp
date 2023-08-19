#include "USceneActionDayNightLightControllerSettings.hpp"
#include "USceneAction_AnimatedLightControllerComponent.hpp"
#include "USceneAction_DayNightLightControllerComponent.hpp"
USceneAction_DayNightLightControllerComponent* USceneAction_DayNightLightControllerComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_DayNightLightControllerComponent");
    return (USceneAction_DayNightLightControllerComponent*)res;
}

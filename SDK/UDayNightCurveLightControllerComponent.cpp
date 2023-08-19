#include "EDayNightLightControllerOp.hpp"
#include "FDayNightLightControllerDirectionalBoost.hpp"
#include "UCurveFloat.hpp"
#include "UCurveLinearColor.hpp"
#include "UDayNightCurveLightControllerComponent.hpp"
#include "UDayNightLightControllerComponent.hpp"
UDayNightCurveLightControllerComponent* UDayNightCurveLightControllerComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightCurveLightControllerComponent");
    return (UDayNightCurveLightControllerComponent*)res;
}

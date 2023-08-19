#include "EDayNightLightControllerOp.hpp"
#include "FDayNightLightControllerDirectionalBoost.hpp"
#include "UCurveFloat.hpp"
#include "UDayNightLightControllerComponent.hpp"
#include "UDayNightTemperatureCurveLightControllerComponent.hpp"
UDayNightTemperatureCurveLightControllerComponent* UDayNightTemperatureCurveLightControllerComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightTemperatureCurveLightControllerComponent");
    return (UDayNightTemperatureCurveLightControllerComponent*)res;
}

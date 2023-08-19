#include "FDayNightLightControllerDirectionalBoost.hpp"
#include "FLinearColor.hpp"
#include "FVector2D.hpp"
#include "UCurveLinearColor.hpp"
#include "UDayNightBasicLightControllerComponent.hpp"
#include "UDayNightLightControllerComponent.hpp"
UDayNightBasicLightControllerComponent* UDayNightBasicLightControllerComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightBasicLightControllerComponent");
    return (UDayNightBasicLightControllerComponent*)res;
}

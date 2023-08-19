#include "FLinearColor.hpp"
#include "UCurveLinearColor.hpp"
#include "UDayNightLightControllerComponent.hpp"
#include "UDayNightLocalLightControllerComponent.hpp"
UDayNightLocalLightControllerComponent* UDayNightLocalLightControllerComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightLocalLightControllerComponent");
    return (UDayNightLocalLightControllerComponent*)res;
}

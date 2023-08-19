#include "EDayNightLightControllerOp.hpp"
#include "FDayNightLightSkyAtmosphereComputeParams.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UCurveFloat.hpp"
#include "UDayNightAtmosphereLightControllerComponent.hpp"
#include "UDayNightLightControllerComponent.hpp"
UDayNightAtmosphereLightControllerComponent* UDayNightAtmosphereLightControllerComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightAtmosphereLightControllerComponent");
    return (UDayNightAtmosphereLightControllerComponent*)res;
}

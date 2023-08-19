#include "UActorComponent.hpp"
#include "UCurveFloat.hpp"
#include "UGlobalSubsurfaceModComponent.hpp"
#include "UMaterialParameterCollection.hpp"
UGlobalSubsurfaceModComponent* UGlobalSubsurfaceModComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.GlobalSubsurfaceModComponent");
    return (UGlobalSubsurfaceModComponent*)res;
}

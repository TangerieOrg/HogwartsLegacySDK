#include "UActorMeshSetupProcessFiltered.hpp"
#include "UActorMeshSetupProcessReceivesWeatherDecals.hpp"
UActorMeshSetupProcessReceivesWeatherDecals* UActorMeshSetupProcessReceivesWeatherDecals::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcessReceivesWeatherDecals");
    return (UActorMeshSetupProcessReceivesWeatherDecals*)res;
}

#include "UActorMeshSetupProcessFiltered.hpp"
#include "UActorMeshSetupProcessReceivesDecals.hpp"
UActorMeshSetupProcessReceivesDecals* UActorMeshSetupProcessReceivesDecals::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcessReceivesDecals");
    return (UActorMeshSetupProcessReceivesDecals*)res;
}

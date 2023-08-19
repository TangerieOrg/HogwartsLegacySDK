#include "UActorMeshSetupProcessFiltered.hpp"
#include "UActorMeshSetupProcessTreatAsBackgroundForOcclusion.hpp"
UActorMeshSetupProcessTreatAsBackgroundForOcclusion* UActorMeshSetupProcessTreatAsBackgroundForOcclusion::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcessTreatAsBackgroundForOcclusion");
    return (UActorMeshSetupProcessTreatAsBackgroundForOcclusion*)res;
}

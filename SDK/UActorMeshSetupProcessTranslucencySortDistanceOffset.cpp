#include "UActorMeshSetupProcessFiltered.hpp"
#include "UActorMeshSetupProcessTranslucencySortDistanceOffset.hpp"
UActorMeshSetupProcessTranslucencySortDistanceOffset* UActorMeshSetupProcessTranslucencySortDistanceOffset::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcessTranslucencySortDistanceOffset");
    return (UActorMeshSetupProcessTranslucencySortDistanceOffset*)res;
}

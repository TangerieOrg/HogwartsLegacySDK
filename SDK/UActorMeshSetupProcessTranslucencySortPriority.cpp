#include "UActorMeshSetupProcessFiltered.hpp"
#include "UActorMeshSetupProcessTranslucencySortPriority.hpp"
UActorMeshSetupProcessTranslucencySortPriority* UActorMeshSetupProcessTranslucencySortPriority::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupProcessTranslucencySortPriority");
    return (UActorMeshSetupProcessTranslucencySortPriority*)res;
}

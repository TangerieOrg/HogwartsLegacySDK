#include "UActorMeshSetupMatchActorHasTag.hpp"
#include "UActorMeshSetupMatchActorTag.hpp"
UActorMeshSetupMatchActorHasTag* UActorMeshSetupMatchActorHasTag::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupMatchActorHasTag");
    return (UActorMeshSetupMatchActorHasTag*)res;
}
